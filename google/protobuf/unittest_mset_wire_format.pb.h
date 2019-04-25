// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_mset_wire_format.proto

#ifndef PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto
#define PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto();
namespace proto2_wireformat_unittest {
class TestMessageSet;
class TestMessageSetDefaultTypeInternal;
extern TestMessageSetDefaultTypeInternal _TestMessageSet_default_instance_;
class TestMessageSetWireFormatContainer;
class TestMessageSetWireFormatContainerDefaultTypeInternal;
extern TestMessageSetWireFormatContainerDefaultTypeInternal _TestMessageSetWireFormatContainer_default_instance_;
}  // namespace proto2_wireformat_unittest
namespace google {
namespace protobuf {
template<> ::proto2_wireformat_unittest::TestMessageSet* Arena::CreateMaybeMessage<::proto2_wireformat_unittest::TestMessageSet>(Arena*);
template<> ::proto2_wireformat_unittest::TestMessageSetWireFormatContainer* Arena::CreateMaybeMessage<::proto2_wireformat_unittest::TestMessageSetWireFormatContainer>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace proto2_wireformat_unittest {

// ===================================================================

class TestMessageSet :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto2_wireformat_unittest.TestMessageSet) */ {
 public:
  TestMessageSet();
  virtual ~TestMessageSet();

  TestMessageSet(const TestMessageSet& from);

  inline TestMessageSet& operator=(const TestMessageSet& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestMessageSet(TestMessageSet&& from) noexcept
    : TestMessageSet() {
    *this = ::std::move(from);
  }

  inline TestMessageSet& operator=(TestMessageSet&& from) noexcept {
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

  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const TestMessageSet& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessageSet* internal_default_instance() {
    return reinterpret_cast<const TestMessageSet*>(
               &_TestMessageSet_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(TestMessageSet* other);
  void Swap(TestMessageSet* other);
  friend void swap(TestMessageSet& a, TestMessageSet& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestMessageSet* New() const final {
    return CreateMaybeMessage<TestMessageSet>(nullptr);
  }

  TestMessageSet* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TestMessageSet>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TestMessageSet& from);
  void MergeFrom(const TestMessageSet& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* InternalParseMessageSetItem(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestMessageSet* other);
  protected:
  explicit TestMessageSet(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(TestMessageSet)
  // @@protoc_insertion_point(class_scope:proto2_wireformat_unittest.TestMessageSet)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto;
};
// -------------------------------------------------------------------

class TestMessageSetWireFormatContainer :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto2_wireformat_unittest.TestMessageSetWireFormatContainer) */ {
 public:
  TestMessageSetWireFormatContainer();
  virtual ~TestMessageSetWireFormatContainer();

  TestMessageSetWireFormatContainer(const TestMessageSetWireFormatContainer& from);

  inline TestMessageSetWireFormatContainer& operator=(const TestMessageSetWireFormatContainer& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestMessageSetWireFormatContainer(TestMessageSetWireFormatContainer&& from) noexcept
    : TestMessageSetWireFormatContainer() {
    *this = ::std::move(from);
  }

  inline TestMessageSetWireFormatContainer& operator=(TestMessageSetWireFormatContainer&& from) noexcept {
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

  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const TestMessageSetWireFormatContainer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessageSetWireFormatContainer* internal_default_instance() {
    return reinterpret_cast<const TestMessageSetWireFormatContainer*>(
               &_TestMessageSetWireFormatContainer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(TestMessageSetWireFormatContainer* other);
  void Swap(TestMessageSetWireFormatContainer* other);
  friend void swap(TestMessageSetWireFormatContainer& a, TestMessageSetWireFormatContainer& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestMessageSetWireFormatContainer* New() const final {
    return CreateMaybeMessage<TestMessageSetWireFormatContainer>(nullptr);
  }

  TestMessageSetWireFormatContainer* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TestMessageSetWireFormatContainer>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TestMessageSetWireFormatContainer& from);
  void MergeFrom(const TestMessageSetWireFormatContainer& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestMessageSetWireFormatContainer* other);
  protected:
  explicit TestMessageSetWireFormatContainer(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
  bool has_message_set() const;
  void clear_message_set();
  static const int kMessageSetFieldNumber = 1;
  const ::proto2_wireformat_unittest::TestMessageSet& message_set() const;
  ::proto2_wireformat_unittest::TestMessageSet* release_message_set();
  ::proto2_wireformat_unittest::TestMessageSet* mutable_message_set();
  void set_allocated_message_set(::proto2_wireformat_unittest::TestMessageSet* message_set);
  void unsafe_arena_set_allocated_message_set(
      ::proto2_wireformat_unittest::TestMessageSet* message_set);
  ::proto2_wireformat_unittest::TestMessageSet* unsafe_arena_release_message_set();

  // @@protoc_insertion_point(class_scope:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::proto2_wireformat_unittest::TestMessageSet* message_set_;
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestMessageSet

// -------------------------------------------------------------------

// TestMessageSetWireFormatContainer

// optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
inline bool TestMessageSetWireFormatContainer::has_message_set() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestMessageSetWireFormatContainer::clear_message_set() {
  if (message_set_ != nullptr) message_set_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::proto2_wireformat_unittest::TestMessageSet& TestMessageSetWireFormatContainer::message_set() const {
  const ::proto2_wireformat_unittest::TestMessageSet* p = message_set_;
  // @@protoc_insertion_point(field_get:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
  return p != nullptr ? *p : *reinterpret_cast<const ::proto2_wireformat_unittest::TestMessageSet*>(
      &::proto2_wireformat_unittest::_TestMessageSet_default_instance_);
}
inline ::proto2_wireformat_unittest::TestMessageSet* TestMessageSetWireFormatContainer::release_message_set() {
  // @@protoc_insertion_point(field_release:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
  _has_bits_[0] &= ~0x00000001u;
  ::proto2_wireformat_unittest::TestMessageSet* temp = message_set_;
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  message_set_ = nullptr;
  return temp;
}
inline ::proto2_wireformat_unittest::TestMessageSet* TestMessageSetWireFormatContainer::unsafe_arena_release_message_set() {
  // @@protoc_insertion_point(field_unsafe_arena_release:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
  _has_bits_[0] &= ~0x00000001u;
  ::proto2_wireformat_unittest::TestMessageSet* temp = message_set_;
  message_set_ = nullptr;
  return temp;
}
inline ::proto2_wireformat_unittest::TestMessageSet* TestMessageSetWireFormatContainer::mutable_message_set() {
  _has_bits_[0] |= 0x00000001u;
  if (message_set_ == nullptr) {
    auto* p = CreateMaybeMessage<::proto2_wireformat_unittest::TestMessageSet>(GetArenaNoVirtual());
    message_set_ = p;
  }
  // @@protoc_insertion_point(field_mutable:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
  return message_set_;
}
inline void TestMessageSetWireFormatContainer::set_allocated_message_set(::proto2_wireformat_unittest::TestMessageSet* message_set) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete message_set_;
  }
  if (message_set) {
    ::google::protobuf::Arena* submessage_arena =
      ::google::protobuf::Arena::GetArena(message_set);
    if (message_arena != submessage_arena) {
      message_set = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, message_set, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  message_set_ = message_set;
  // @@protoc_insertion_point(field_set_allocated:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto2_wireformat_unittest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto
