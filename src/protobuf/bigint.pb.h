// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bigint.proto

#ifndef PROTOBUF_bigint_2eproto__INCLUDED
#define PROTOBUF_bigint_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace Protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_bigint_2eproto();
void protobuf_AssignDesc_bigint_2eproto();
void protobuf_ShutdownFile_bigint_2eproto();

class BigInt;

// ===================================================================

class BigInt : public ::google::protobuf::Message {
 public:
  BigInt();
  virtual ~BigInt();
  
  BigInt(const BigInt& from);
  
  inline BigInt& operator=(const BigInt& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const BigInt& default_instance();
  
  void Swap(BigInt* other);
  
  // implements Message ----------------------------------------------
  
  BigInt* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BigInt& from);
  void MergeFrom(const BigInt& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required bytes data = 1;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  
  // @@protoc_insertion_point(class_scope:Protobuf.BigInt)
 private:
  inline void set_has_data();
  inline void clear_has_data();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* data_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_bigint_2eproto();
  friend void protobuf_AssignDesc_bigint_2eproto();
  friend void protobuf_ShutdownFile_bigint_2eproto();
  
  void InitAsDefaultInstance();
  static BigInt* default_instance_;
};
// ===================================================================


// ===================================================================

// BigInt

// required bytes data = 1;
inline bool BigInt::has_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BigInt::set_has_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BigInt::clear_has_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BigInt::clear_data() {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& BigInt::data() const {
  return *data_;
}
inline void BigInt::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void BigInt::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void BigInt::set_data(const void* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BigInt::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  return data_;
}
inline ::std::string* BigInt::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protobuf

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_bigint_2eproto__INCLUDED