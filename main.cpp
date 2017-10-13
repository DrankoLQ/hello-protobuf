#include <fstream>
#include "Person.pb.h"

using namespace std;
using namespace models;

int main(int argc, char *argv[]) {
    // Verify that the version of the library that we linked against is
    // compatible with the version of the headers we compiled against.
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    if (argc != 2) {
        cerr << "Usage: " << endl;
        cerr << "read: read all Person objects saved in people.bin file" << endl;
        cerr << "write: write few Person objects in people.bin file" << endl;
        return -1;
    }

    if (strcmp(argv[1], "write") == 0) {
        // Write some people's data
        fstream output("people.bin", ios::out | ios::trunc | ios::binary);
        Person person;
        person.add_id(0);
        person.add_name("Dani");
        person.add_email("dani@email.com");
        person.add_id(1);
        person.add_name("Jose");
        person.add_email("jose@email.com");
        person.add_id(2);
        person.add_name("Juan Carlos");
        person.add_email("juancarlos@email.com");
        person.SerializeToOstream(&output);
        output.close();
    } else if (strcmp(argv[1], "read") == 0) {
        // Read the existing people.
        fstream input("people.bin", ios::in | ios::binary);
        Person auxPerson;
        if (!auxPerson.ParseFromIstream(&input)) {
            cerr << "Failed read people data. Does people.bin file exist?" << endl;
            return -1;
        } else {
            cout << "People data read from binary file correctly" << endl;
            for (int i = 0; i < auxPerson.email_size(); ++i) {
                cout << "ID: " << auxPerson.id(i)
                     << " Name: " << auxPerson.name(i)
                     << " - Email: " << auxPerson.email(i)
                     << endl;
            }
        }
        input.close();
    } else {
        cerr << "Command not recognized" << endl;
    }

    google::protobuf::ShutdownProtobufLibrary();

    return 0;
}