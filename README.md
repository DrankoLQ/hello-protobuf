# hello-protobuf
Simple application to test how Google Protocol Buffers works

# Why?
Google Protocol Buffers permit to serialize/deserialize data structure in an efficient binary format

# Data structure
Data structure is defined in ```Person.proto```file. ```repeated``` field type mark that the field can be repeated any number of times (including zero) 

```
syntax = "proto3";

package models;

message Person {
    repeated string name = 1;
    repeated int32 id = 2;
    repeated string email = 3;
}
```

# Protobuf API

### Write various people's data in binary format

```
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

if (!person.SerializeToOstream(&output)) {
    cerr << "Failed to write person." << endl;
    return -1;
}

output.close();
```

### Write people's data from a binary file
```
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
```

# Usage
## Compile
```cmake .```

```make``` 

## Execute
```./hello_protobuf write``` Writes sample data into ```people.bin``` file

```./hello_protobuf read``` Read sample data from ```people.bin```file
