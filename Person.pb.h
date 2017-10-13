// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Person.proto

#ifndef PROTOBUF_Person_2eproto__INCLUDED
#define PROTOBUF_Person_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_Person_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsPersonImpl();
void InitDefaultsPerson();
inline void InitDefaults() {
  InitDefaultsPerson();
}
}  // namespace protobuf_Person_2eproto
namespace models {
class Person;
class PersonDefaultTypeInternal;
extern PersonDefaultTypeInternal _Person_default_instance_;
}  // namespace models
namespace models {

// ===================================================================

class Person : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:models.Person) */ {
 public:
  Person();
  virtual ~Person();

  Person(const Person& from);

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Person(Person&& from) noexcept
    : Person() {
    *this = ::std::move(from);
  }

  inline Person& operator=(Person&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Person& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Person* internal_default_instance() {
    return reinterpret_cast<const Person*>(
               &_Person_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Person* other);
  friend void swap(Person& a, Person& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Person* New() const PROTOBUF_FINAL { return New(NULL); }

  Person* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Person* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string name = 1;
  int name_size() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name(int index) const;
  ::std::string* mutable_name(int index);
  void set_name(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_name(int index, ::std::string&& value);
  #endif
  void set_name(int index, const char* value);
  void set_name(int index, const char* value, size_t size);
  ::std::string* add_name();
  void add_name(const ::std::string& value);
  #if LANG_CXX11
  void add_name(::std::string&& value);
  #endif
  void add_name(const char* value);
  void add_name(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& name() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_name();

  // repeated int32 id = 2;
  int id_size() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id(int index) const;
  void set_id(int index, ::google::protobuf::int32 value);
  void add_id(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      id() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_id();

  // repeated string email = 3;
  int email_size() const;
  void clear_email();
  static const int kEmailFieldNumber = 3;
  const ::std::string& email(int index) const;
  ::std::string* mutable_email(int index);
  void set_email(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_email(int index, ::std::string&& value);
  #endif
  void set_email(int index, const char* value);
  void set_email(int index, const char* value, size_t size);
  ::std::string* add_email();
  void add_email(const ::std::string& value);
  #if LANG_CXX11
  void add_email(::std::string&& value);
  #endif
  void add_email(const char* value);
  void add_email(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& email() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_email();

  // @@protoc_insertion_point(class_scope:models.Person)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> name_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > id_;
  mutable int _id_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> email_;
  mutable int _cached_size_;
  friend struct ::protobuf_Person_2eproto::TableStruct;
  friend void ::protobuf_Person_2eproto::InitDefaultsPersonImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Person

// repeated string name = 1;
inline int Person::name_size() const {
  return name_.size();
}
inline void Person::clear_name() {
  name_.Clear();
}
inline const ::std::string& Person::name(int index) const {
  // @@protoc_insertion_point(field_get:models.Person.name)
  return name_.Get(index);
}
inline ::std::string* Person::mutable_name(int index) {
  // @@protoc_insertion_point(field_mutable:models.Person.name)
  return name_.Mutable(index);
}
inline void Person::set_name(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:models.Person.name)
  name_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Person::set_name(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:models.Person.name)
  name_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Person::set_name(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:models.Person.name)
}
inline void Person::set_name(int index, const char* value, size_t size) {
  name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:models.Person.name)
}
inline ::std::string* Person::add_name() {
  // @@protoc_insertion_point(field_add_mutable:models.Person.name)
  return name_.Add();
}
inline void Person::add_name(const ::std::string& value) {
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:models.Person.name)
}
#if LANG_CXX11
inline void Person::add_name(::std::string&& value) {
  name_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:models.Person.name)
}
#endif
inline void Person::add_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:models.Person.name)
}
inline void Person::add_name(const char* value, size_t size) {
  name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:models.Person.name)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Person::name() const {
  // @@protoc_insertion_point(field_list:models.Person.name)
  return name_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Person::mutable_name() {
  // @@protoc_insertion_point(field_mutable_list:models.Person.name)
  return &name_;
}

// repeated int32 id = 2;
inline int Person::id_size() const {
  return id_.size();
}
inline void Person::clear_id() {
  id_.Clear();
}
inline ::google::protobuf::int32 Person::id(int index) const {
  // @@protoc_insertion_point(field_get:models.Person.id)
  return id_.Get(index);
}
inline void Person::set_id(int index, ::google::protobuf::int32 value) {
  id_.Set(index, value);
  // @@protoc_insertion_point(field_set:models.Person.id)
}
inline void Person::add_id(::google::protobuf::int32 value) {
  id_.Add(value);
  // @@protoc_insertion_point(field_add:models.Person.id)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Person::id() const {
  // @@protoc_insertion_point(field_list:models.Person.id)
  return id_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Person::mutable_id() {
  // @@protoc_insertion_point(field_mutable_list:models.Person.id)
  return &id_;
}

// repeated string email = 3;
inline int Person::email_size() const {
  return email_.size();
}
inline void Person::clear_email() {
  email_.Clear();
}
inline const ::std::string& Person::email(int index) const {
  // @@protoc_insertion_point(field_get:models.Person.email)
  return email_.Get(index);
}
inline ::std::string* Person::mutable_email(int index) {
  // @@protoc_insertion_point(field_mutable:models.Person.email)
  return email_.Mutable(index);
}
inline void Person::set_email(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:models.Person.email)
  email_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Person::set_email(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:models.Person.email)
  email_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Person::set_email(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  email_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:models.Person.email)
}
inline void Person::set_email(int index, const char* value, size_t size) {
  email_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:models.Person.email)
}
inline ::std::string* Person::add_email() {
  // @@protoc_insertion_point(field_add_mutable:models.Person.email)
  return email_.Add();
}
inline void Person::add_email(const ::std::string& value) {
  email_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:models.Person.email)
}
#if LANG_CXX11
inline void Person::add_email(::std::string&& value) {
  email_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:models.Person.email)
}
#endif
inline void Person::add_email(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  email_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:models.Person.email)
}
inline void Person::add_email(const char* value, size_t size) {
  email_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:models.Person.email)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Person::email() const {
  // @@protoc_insertion_point(field_list:models.Person.email)
  return email_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Person::mutable_email() {
  // @@protoc_insertion_point(field_mutable_list:models.Person.email)
  return &email_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace models

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Person_2eproto__INCLUDED