// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_lazy_dependencies_enum.proto

#include <google/protobuf/unittest_lazy_dependencies_enum.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace protobuf_unittest {
namespace lazy_imports {
}  // namespace lazy_imports
}  // namespace protobuf_unittest
void InitDefaults_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto() {
}

constexpr ::google::protobuf::Metadata* file_level_metadata_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto = nullptr;
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto[1];
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto = nullptr;
const ::google::protobuf::uint32 TableStruct_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto::offsets[1] = {};
static constexpr ::google::protobuf::internal::MigrationSchema* schemas = nullptr;
static constexpr ::google::protobuf::Message* const* file_default_instances = nullptr;

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto = {
  {}, AddDescriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto, "google/protobuf/unittest_lazy_dependencies_enum.proto", schemas,
  file_default_instances, TableStruct_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto::offsets,
  file_level_metadata_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto, 0, file_level_enum_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto, file_level_service_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto,
};

const char descriptor_table_protodef_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto[] =
  "\n5google/protobuf/unittest_lazy_dependen"
  "cies_enum.proto\022\036protobuf_unittest.lazy_"
  "imports*,\n\010LazyEnum\022\017\n\013LAZY_ENUM_0\020\000\022\017\n\013"
  "LAZY_ENUM_1\020\001B,B\034UnittestLazyImportsEnum"
  "ProtoH\001\200\001\001\210\001\001\220\001\001\370\001\001"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto = {
  false, InitDefaults_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto, 
  descriptor_table_protodef_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto,
  "google/protobuf/unittest_lazy_dependencies_enum.proto", &assign_descriptors_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto, 179,
};

void AddDescriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto = []() { AddDescriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto(); return true; }();
namespace protobuf_unittest {
namespace lazy_imports {
const ::google::protobuf::EnumDescriptor* LazyEnum_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto);
  return file_level_enum_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto[0];
}
bool LazyEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace lazy_imports
}  // namespace protobuf_unittest
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
