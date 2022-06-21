// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cube.proto

#ifndef PROTOBUF_INCLUDED_cube_2eproto
#define PROTOBUF_INCLUDED_cube_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_cube_2eproto 

namespace protobuf_cube_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_cube_2eproto
namespace rec {
namespace mcube {
class DictRequest;
class DictRequestDefaultTypeInternal;
extern DictRequestDefaultTypeInternal _DictRequest_default_instance_;
class DictResponse;
class DictResponseDefaultTypeInternal;
extern DictResponseDefaultTypeInternal _DictResponse_default_instance_;
class DictValue;
class DictValueDefaultTypeInternal;
extern DictValueDefaultTypeInternal _DictValue_default_instance_;
}  // namespace mcube
}  // namespace rec
namespace google {
namespace protobuf {
template<> ::rec::mcube::DictRequest* Arena::CreateMaybeMessage<::rec::mcube::DictRequest>(Arena*);
template<> ::rec::mcube::DictResponse* Arena::CreateMaybeMessage<::rec::mcube::DictResponse>(Arena*);
template<> ::rec::mcube::DictValue* Arena::CreateMaybeMessage<::rec::mcube::DictValue>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace rec {
namespace mcube {

// ===================================================================

class DictRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:rec.mcube.DictRequest) */ {
 public:
  DictRequest();
  virtual ~DictRequest();

  DictRequest(const DictRequest& from);

  inline DictRequest& operator=(const DictRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DictRequest(DictRequest&& from) noexcept
    : DictRequest() {
    *this = ::std::move(from);
  }

  inline DictRequest& operator=(DictRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DictRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DictRequest* internal_default_instance() {
    return reinterpret_cast<const DictRequest*>(
               &_DictRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(DictRequest* other);
  friend void swap(DictRequest& a, DictRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DictRequest* New() const final {
    return CreateMaybeMessage<DictRequest>(NULL);
  }

  DictRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DictRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DictRequest& from);
  void MergeFrom(const DictRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DictRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated uint64 keys = 1;
  int keys_size() const;
  void clear_keys();
  static const int kKeysFieldNumber = 1;
  ::google::protobuf::uint64 keys(int index) const;
  void set_keys(int index, ::google::protobuf::uint64 value);
  void add_keys(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      keys() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_keys();

  // optional bool version_required = 2 [default = false];
  bool has_version_required() const;
  void clear_version_required();
  static const int kVersionRequiredFieldNumber = 2;
  bool version_required() const;
  void set_version_required(bool value);

  // @@protoc_insertion_point(class_scope:rec.mcube.DictRequest)
 private:
  void set_has_version_required();
  void clear_has_version_required();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > keys_;
  bool version_required_;
  friend struct ::protobuf_cube_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DictValue : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:rec.mcube.DictValue) */ {
 public:
  DictValue();
  virtual ~DictValue();

  DictValue(const DictValue& from);

  inline DictValue& operator=(const DictValue& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DictValue(DictValue&& from) noexcept
    : DictValue() {
    *this = ::std::move(from);
  }

  inline DictValue& operator=(DictValue&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DictValue& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DictValue* internal_default_instance() {
    return reinterpret_cast<const DictValue*>(
               &_DictValue_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(DictValue* other);
  friend void swap(DictValue& a, DictValue& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DictValue* New() const final {
    return CreateMaybeMessage<DictValue>(NULL);
  }

  DictValue* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DictValue>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DictValue& from);
  void MergeFrom(const DictValue& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DictValue* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bytes value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const void* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // required uint32 status = 1;
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::google::protobuf::uint32 status() const;
  void set_status(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:rec.mcube.DictValue)
 private:
  void set_has_status();
  void clear_has_status();
  void set_has_value();
  void clear_has_value();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  ::google::protobuf::uint32 status_;
  friend struct ::protobuf_cube_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DictResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:rec.mcube.DictResponse) */ {
 public:
  DictResponse();
  virtual ~DictResponse();

  DictResponse(const DictResponse& from);

  inline DictResponse& operator=(const DictResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DictResponse(DictResponse&& from) noexcept
    : DictResponse() {
    *this = ::std::move(from);
  }

  inline DictResponse& operator=(DictResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DictResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DictResponse* internal_default_instance() {
    return reinterpret_cast<const DictResponse*>(
               &_DictResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(DictResponse* other);
  friend void swap(DictResponse& a, DictResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DictResponse* New() const final {
    return CreateMaybeMessage<DictResponse>(NULL);
  }

  DictResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DictResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DictResponse& from);
  void MergeFrom(const DictResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DictResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .rec.mcube.DictValue values = 1;
  int values_size() const;
  void clear_values();
  static const int kValuesFieldNumber = 1;
  ::rec::mcube::DictValue* mutable_values(int index);
  ::google::protobuf::RepeatedPtrField< ::rec::mcube::DictValue >*
      mutable_values();
  const ::rec::mcube::DictValue& values(int index) const;
  ::rec::mcube::DictValue* add_values();
  const ::google::protobuf::RepeatedPtrField< ::rec::mcube::DictValue >&
      values() const;

  // optional string version = 2;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 2;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  #if LANG_CXX11
  void set_version(::std::string&& value);
  #endif
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // @@protoc_insertion_point(class_scope:rec.mcube.DictResponse)
 private:
  void set_has_version();
  void clear_has_version();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::rec::mcube::DictValue > values_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  friend struct ::protobuf_cube_2eproto::TableStruct;
};
// ===================================================================

class DictService_Stub;

class DictService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline DictService() {};
 public:
  virtual ~DictService();

  typedef DictService_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void seek(::google::protobuf::RpcController* controller,
                       const ::rec::mcube::DictRequest* request,
                       ::rec::mcube::DictResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DictService);
};

class DictService_Stub : public DictService {
 public:
  DictService_Stub(::google::protobuf::RpcChannel* channel);
  DictService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~DictService_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements DictService ------------------------------------------

  void seek(::google::protobuf::RpcController* controller,
                       const ::rec::mcube::DictRequest* request,
                       ::rec::mcube::DictResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DictService_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DictRequest

// repeated uint64 keys = 1;
inline int DictRequest::keys_size() const {
  return keys_.size();
}
inline void DictRequest::clear_keys() {
  keys_.Clear();
}
inline ::google::protobuf::uint64 DictRequest::keys(int index) const {
  // @@protoc_insertion_point(field_get:rec.mcube.DictRequest.keys)
  return keys_.Get(index);
}
inline void DictRequest::set_keys(int index, ::google::protobuf::uint64 value) {
  keys_.Set(index, value);
  // @@protoc_insertion_point(field_set:rec.mcube.DictRequest.keys)
}
inline void DictRequest::add_keys(::google::protobuf::uint64 value) {
  keys_.Add(value);
  // @@protoc_insertion_point(field_add:rec.mcube.DictRequest.keys)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
DictRequest::keys() const {
  // @@protoc_insertion_point(field_list:rec.mcube.DictRequest.keys)
  return keys_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
DictRequest::mutable_keys() {
  // @@protoc_insertion_point(field_mutable_list:rec.mcube.DictRequest.keys)
  return &keys_;
}

// optional bool version_required = 2 [default = false];
inline bool DictRequest::has_version_required() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DictRequest::set_has_version_required() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DictRequest::clear_has_version_required() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DictRequest::clear_version_required() {
  version_required_ = false;
  clear_has_version_required();
}
inline bool DictRequest::version_required() const {
  // @@protoc_insertion_point(field_get:rec.mcube.DictRequest.version_required)
  return version_required_;
}
inline void DictRequest::set_version_required(bool value) {
  set_has_version_required();
  version_required_ = value;
  // @@protoc_insertion_point(field_set:rec.mcube.DictRequest.version_required)
}

// -------------------------------------------------------------------

// DictValue

// required uint32 status = 1;
inline bool DictValue::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DictValue::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DictValue::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DictValue::clear_status() {
  status_ = 0u;
  clear_has_status();
}
inline ::google::protobuf::uint32 DictValue::status() const {
  // @@protoc_insertion_point(field_get:rec.mcube.DictValue.status)
  return status_;
}
inline void DictValue::set_status(::google::protobuf::uint32 value) {
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:rec.mcube.DictValue.status)
}

// required bytes value = 2;
inline bool DictValue::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DictValue::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DictValue::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DictValue::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
inline const ::std::string& DictValue::value() const {
  // @@protoc_insertion_point(field_get:rec.mcube.DictValue.value)
  return value_.GetNoArena();
}
inline void DictValue::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rec.mcube.DictValue.value)
}
#if LANG_CXX11
inline void DictValue::set_value(::std::string&& value) {
  set_has_value();
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:rec.mcube.DictValue.value)
}
#endif
inline void DictValue::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rec.mcube.DictValue.value)
}
inline void DictValue::set_value(const void* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rec.mcube.DictValue.value)
}
inline ::std::string* DictValue::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:rec.mcube.DictValue.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DictValue::release_value() {
  // @@protoc_insertion_point(field_release:rec.mcube.DictValue.value)
  if (!has_value()) {
    return NULL;
  }
  clear_has_value();
  return value_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DictValue::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:rec.mcube.DictValue.value)
}

// -------------------------------------------------------------------

// DictResponse

// repeated .rec.mcube.DictValue values = 1;
inline int DictResponse::values_size() const {
  return values_.size();
}
inline void DictResponse::clear_values() {
  values_.Clear();
}
inline ::rec::mcube::DictValue* DictResponse::mutable_values(int index) {
  // @@protoc_insertion_point(field_mutable:rec.mcube.DictResponse.values)
  return values_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::rec::mcube::DictValue >*
DictResponse::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:rec.mcube.DictResponse.values)
  return &values_;
}
inline const ::rec::mcube::DictValue& DictResponse::values(int index) const {
  // @@protoc_insertion_point(field_get:rec.mcube.DictResponse.values)
  return values_.Get(index);
}
inline ::rec::mcube::DictValue* DictResponse::add_values() {
  // @@protoc_insertion_point(field_add:rec.mcube.DictResponse.values)
  return values_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::rec::mcube::DictValue >&
DictResponse::values() const {
  // @@protoc_insertion_point(field_list:rec.mcube.DictResponse.values)
  return values_;
}

// optional string version = 2;
inline bool DictResponse::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DictResponse::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DictResponse::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DictResponse::clear_version() {
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_version();
}
inline const ::std::string& DictResponse::version() const {
  // @@protoc_insertion_point(field_get:rec.mcube.DictResponse.version)
  return version_.GetNoArena();
}
inline void DictResponse::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rec.mcube.DictResponse.version)
}
#if LANG_CXX11
inline void DictResponse::set_version(::std::string&& value) {
  set_has_version();
  version_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:rec.mcube.DictResponse.version)
}
#endif
inline void DictResponse::set_version(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_version();
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rec.mcube.DictResponse.version)
}
inline void DictResponse::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rec.mcube.DictResponse.version)
}
inline ::std::string* DictResponse::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:rec.mcube.DictResponse.version)
  return version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DictResponse::release_version() {
  // @@protoc_insertion_point(field_release:rec.mcube.DictResponse.version)
  if (!has_version()) {
    return NULL;
  }
  clear_has_version();
  return version_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DictResponse::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    set_has_version();
  } else {
    clear_has_version();
  }
  version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), version);
  // @@protoc_insertion_point(field_set_allocated:rec.mcube.DictResponse.version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mcube
}  // namespace rec

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_cube_2eproto
