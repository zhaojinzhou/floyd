// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: meta.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "meta.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace meta {

namespace {

const ::google::protobuf::Descriptor* Meta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
    Meta_reflection_ = NULL;
const ::google::protobuf::Descriptor* Meta_Node_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
    Meta_Node_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Meta_Type_descriptor_ = NULL;
const ::google::protobuf::Descriptor* MetaRes_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
    MetaRes_reflection_ = NULL;
const ::google::protobuf::Descriptor* MetaRes_Node_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
    MetaRes_Node_reflection_ = NULL;

}  // namespace

void protobuf_AssignDesc_meta_2eproto() {
  protobuf_AddDesc_meta_2eproto();
  const ::google::protobuf::FileDescriptor* file =
      ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
          "meta.proto");
  GOOGLE_CHECK(file != NULL);
  Meta_descriptor_ = file->message_type(0);
  static const int Meta_offsets_[2] = {
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Meta, t_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Meta, nodes_), };
  Meta_reflection_ =
      new ::google::protobuf::internal::GeneratedMessageReflection(
          Meta_descriptor_, Meta::default_instance_, Meta_offsets_,
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Meta, _has_bits_[0]),
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Meta,
                                                         _unknown_fields_),
          -1, ::google::protobuf::DescriptorPool::generated_pool(),
          ::google::protobuf::MessageFactory::generated_factory(),
          sizeof(Meta));
  Meta_Node_descriptor_ = Meta_descriptor_->nested_type(0);
  static const int Meta_Node_offsets_[2] = {
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Meta_Node, ip_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Meta_Node, port_), };
  Meta_Node_reflection_ =
      new ::google::protobuf::internal::GeneratedMessageReflection(
          Meta_Node_descriptor_, Meta_Node::default_instance_,
          Meta_Node_offsets_, GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(
                                  Meta_Node, _has_bits_[0]),
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Meta_Node,
                                                         _unknown_fields_),
          -1, ::google::protobuf::DescriptorPool::generated_pool(),
          ::google::protobuf::MessageFactory::generated_factory(),
          sizeof(Meta_Node));
  Meta_Type_descriptor_ = Meta_descriptor_->enum_type(0);
  MetaRes_descriptor_ = file->message_type(1);
  static const int MetaRes_offsets_[1] = {
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MetaRes, nodes_), };
  MetaRes_reflection_ =
      new ::google::protobuf::internal::GeneratedMessageReflection(
          MetaRes_descriptor_, MetaRes::default_instance_, MetaRes_offsets_,
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MetaRes,
                                                         _has_bits_[0]),
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MetaRes,
                                                         _unknown_fields_),
          -1, ::google::protobuf::DescriptorPool::generated_pool(),
          ::google::protobuf::MessageFactory::generated_factory(),
          sizeof(MetaRes));
  MetaRes_Node_descriptor_ = MetaRes_descriptor_->nested_type(0);
  static const int MetaRes_Node_offsets_[2] = {
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MetaRes_Node, ip_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MetaRes_Node, port_), };
  MetaRes_Node_reflection_ =
      new ::google::protobuf::internal::GeneratedMessageReflection(
          MetaRes_Node_descriptor_, MetaRes_Node::default_instance_,
          MetaRes_Node_offsets_, GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(
                                     MetaRes_Node, _has_bits_[0]),
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MetaRes_Node,
                                                         _unknown_fields_),
          -1, ::google::protobuf::DescriptorPool::generated_pool(),
          ::google::protobuf::MessageFactory::generated_factory(),
          sizeof(MetaRes_Node));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                                     &protobuf_AssignDesc_meta_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Meta_descriptor_, &Meta::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Meta_Node_descriptor_, &Meta_Node::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MetaRes_descriptor_, &MetaRes::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MetaRes_Node_descriptor_, &MetaRes_Node::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_meta_2eproto() {
  delete Meta::default_instance_;
  delete Meta_reflection_;
  delete Meta_Node::default_instance_;
  delete Meta_Node_reflection_;
  delete MetaRes::default_instance_;
  delete MetaRes_reflection_;
  delete MetaRes_Node::default_instance_;
  delete MetaRes_Node_reflection_;
}

void protobuf_AddDesc_meta_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      "\n\nmeta.proto\022\004meta\"\200\001\n\004Meta\022\032\n\001t\030\001 "
      "\002(\0162\017"
      ".meta.Meta.Type\022\036\n\005nodes\030\002 \003(\0132\017.meta.Me"
      "ta.Node\032 \n\004Node\022\n\n\002ip\030\001 "
      "\002(\014\022\014\n\004port\030\002 \002("
      "\005\"\032\n\004Type\022\010\n\004PING\020\000\022\010\n\004NODE\020\001"
      "\"N\n\007MetaRes"
      "\022!\n\005nodes\030\001 \003(\0132\022.meta.MetaRes.Node\032 \n\004N"
      "ode\022\n\n\002ip\030\001 \002(\014\022\014\n\004port\030\002 \002(\005",
      229);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "meta.proto", &protobuf_RegisterTypes);
  Meta::default_instance_ = new Meta();
  Meta_Node::default_instance_ = new Meta_Node();
  MetaRes::default_instance_ = new MetaRes();
  MetaRes_Node::default_instance_ = new MetaRes_Node();
  Meta::default_instance_->InitAsDefaultInstance();
  Meta_Node::default_instance_->InitAsDefaultInstance();
  MetaRes::default_instance_->InitAsDefaultInstance();
  MetaRes_Node::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_meta_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_meta_2eproto {
  StaticDescriptorInitializer_meta_2eproto() {
    protobuf_AddDesc_meta_2eproto();
  }
} static_descriptor_initializer_meta_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Meta_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Meta_Type_descriptor_;
}
bool Meta_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Meta_Type Meta::PING;
const Meta_Type Meta::NODE;
const Meta_Type Meta::Type_MIN;
const Meta_Type Meta::Type_MAX;
const int Meta::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Meta_Node::kIpFieldNumber;
const int Meta_Node::kPortFieldNumber;
#endif  // !_MSC_VER

Meta_Node::Meta_Node() : ::google::protobuf::Message() { SharedCtor(); }

void Meta_Node::InitAsDefaultInstance() {}

Meta_Node::Meta_Node(const Meta_Node& from) : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Meta_Node::SharedCtor() {
  _cached_size_ = 0;
  ip_ =
      const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  port_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Meta_Node::~Meta_Node() { SharedDtor(); }

void Meta_Node::SharedDtor() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (this != default_instance_) {
  }
}

void Meta_Node::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Meta_Node::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Meta_Node_descriptor_;
}

const Meta_Node& Meta_Node::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_meta_2eproto();
  return *default_instance_;
}

Meta_Node* Meta_Node::default_instance_ = NULL;

Meta_Node* Meta_Node::New() const { return new Meta_Node; }

void Meta_Node::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_ip()) {
      if (ip_ != &::google::protobuf::internal::kEmptyString) {
        ip_->clear();
      }
    }
    port_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Meta_Node::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) \
  if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (
        ::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes ip = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::
                WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
              input, this->mutable_ip()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_port;
        break;
      }

      // required int32 port = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
        parse_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
              ::google::protobuf::int32,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
              input, &port_)));
          set_has_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
            input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Meta_Node::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bytes ip = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(1, this->ip(),
                                                             output);
  }

  // required int32 port = 2;
  if (has_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->port(),
                                                             output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Meta_Node::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bytes ip = 1;
  if (has_ip()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->ip(), target);
  }

  // required int32 port = 2;
  if (has_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(
        2, this->port(), target);
  }

  if (!unknown_fields().empty()) {
    target =
        ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
            unknown_fields(), target);
  }
  return target;
}

int Meta_Node::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes ip = 1;
    if (has_ip()) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                            this->ip());
    }

    // required int32 port = 2;
    if (has_port()) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::Int32Size(
                            this->port());
    }
  }
  if (!unknown_fields().empty()) {
    total_size +=
        ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
            unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Meta_Node::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Meta_Node* source =
      ::google::protobuf::internal::dynamic_cast_if_available<const Meta_Node*>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Meta_Node::MergeFrom(const Meta_Node& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ip()) {
      set_ip(from.ip());
    }
    if (from.has_port()) {
      set_port(from.port());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Meta_Node::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Meta_Node::CopyFrom(const Meta_Node& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Meta_Node::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void Meta_Node::Swap(Meta_Node* other) {
  if (other != this) {
    std::swap(ip_, other->ip_);
    std::swap(port_, other->port_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Meta_Node::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Meta_Node_descriptor_;
  metadata.reflection = Meta_Node_reflection_;
  return metadata;
}

// -------------------------------------------------------------------

#ifndef _MSC_VER
const int Meta::kTFieldNumber;
const int Meta::kNodesFieldNumber;
#endif  // !_MSC_VER

Meta::Meta() : ::google::protobuf::Message() { SharedCtor(); }

void Meta::InitAsDefaultInstance() {}

Meta::Meta(const Meta& from) : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Meta::SharedCtor() {
  _cached_size_ = 0;
  t_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Meta::~Meta() { SharedDtor(); }

void Meta::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Meta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Meta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Meta_descriptor_;
}

const Meta& Meta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_meta_2eproto();
  return *default_instance_;
}

Meta* Meta::default_instance_ = NULL;

Meta* Meta::New() const { return new Meta; }

void Meta::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    t_ = 0;
  }
  nodes_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Meta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) \
  if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (
        ::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .meta.Meta.Type t = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
              int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
              input, &value)));
          if (::meta::Meta_Type_IsValid(value)) {
            set_t(static_cast< ::meta::Meta_Type>(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_nodes;
        break;
      }

      // repeated .meta.Meta.Node nodes = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::
                WIRETYPE_LENGTH_DELIMITED) {
        parse_nodes:
          DO_(::google::protobuf::internal::WireFormatLite::
                  ReadMessageNoVirtual(input, add_nodes()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_nodes;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
            input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Meta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .meta.Meta.Type t = 1;
  if (has_t()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(1, this->t(),
                                                            output);
  }

  // repeated .meta.Meta.Node nodes = 2;
  for (int i = 0; i < this->nodes_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        2, this->nodes(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Meta::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .meta.Meta.Type t = 1;
  if (has_t()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
        1, this->t(), target);
  }

  // repeated .meta.Meta.Node nodes = 2;
  for (int i = 0; i < this->nodes_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteMessageNoVirtualToArray(2, this->nodes(i), target);
  }

  if (!unknown_fields().empty()) {
    target =
        ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
            unknown_fields(), target);
  }
  return target;
}

int Meta::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .meta.Meta.Type t = 1;
    if (has_t()) {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::EnumSize(this->t());
    }
  }
  // repeated .meta.Meta.Node nodes = 2;
  total_size += 1 * this->nodes_size();
  for (int i = 0; i < this->nodes_size(); i++) {
    total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
            this->nodes(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
        ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
            unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Meta::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Meta* source =
      ::google::protobuf::internal::dynamic_cast_if_available<const Meta*>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Meta::MergeFrom(const Meta& from) {
  GOOGLE_CHECK_NE(&from, this);
  nodes_.MergeFrom(from.nodes_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_t()) {
      set_t(from.t());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Meta::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Meta::CopyFrom(const Meta& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Meta::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < nodes_size(); i++) {
    if (!this->nodes(i).IsInitialized()) return false;
  }
  return true;
}

void Meta::Swap(Meta* other) {
  if (other != this) {
    std::swap(t_, other->t_);
    nodes_.Swap(&other->nodes_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Meta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Meta_descriptor_;
  metadata.reflection = Meta_reflection_;
  return metadata;
}

// ===================================================================

#ifndef _MSC_VER
const int MetaRes_Node::kIpFieldNumber;
const int MetaRes_Node::kPortFieldNumber;
#endif  // !_MSC_VER

MetaRes_Node::MetaRes_Node() : ::google::protobuf::Message() { SharedCtor(); }

void MetaRes_Node::InitAsDefaultInstance() {}

MetaRes_Node::MetaRes_Node(const MetaRes_Node& from)
    : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MetaRes_Node::SharedCtor() {
  _cached_size_ = 0;
  ip_ =
      const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  port_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MetaRes_Node::~MetaRes_Node() { SharedDtor(); }

void MetaRes_Node::SharedDtor() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (this != default_instance_) {
  }
}

void MetaRes_Node::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MetaRes_Node::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MetaRes_Node_descriptor_;
}

const MetaRes_Node& MetaRes_Node::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_meta_2eproto();
  return *default_instance_;
}

MetaRes_Node* MetaRes_Node::default_instance_ = NULL;

MetaRes_Node* MetaRes_Node::New() const { return new MetaRes_Node; }

void MetaRes_Node::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_ip()) {
      if (ip_ != &::google::protobuf::internal::kEmptyString) {
        ip_->clear();
      }
    }
    port_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MetaRes_Node::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) \
  if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (
        ::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes ip = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::
                WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
              input, this->mutable_ip()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_port;
        break;
      }

      // required int32 port = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
        parse_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
              ::google::protobuf::int32,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
              input, &port_)));
          set_has_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
            input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MetaRes_Node::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bytes ip = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(1, this->ip(),
                                                             output);
  }

  // required int32 port = 2;
  if (has_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->port(),
                                                             output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MetaRes_Node::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bytes ip = 1;
  if (has_ip()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->ip(), target);
  }

  // required int32 port = 2;
  if (has_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(
        2, this->port(), target);
  }

  if (!unknown_fields().empty()) {
    target =
        ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
            unknown_fields(), target);
  }
  return target;
}

int MetaRes_Node::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes ip = 1;
    if (has_ip()) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                            this->ip());
    }

    // required int32 port = 2;
    if (has_port()) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::Int32Size(
                            this->port());
    }
  }
  if (!unknown_fields().empty()) {
    total_size +=
        ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
            unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MetaRes_Node::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MetaRes_Node* source =
      ::google::protobuf::internal::dynamic_cast_if_available<
          const MetaRes_Node*>(&from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MetaRes_Node::MergeFrom(const MetaRes_Node& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ip()) {
      set_ip(from.ip());
    }
    if (from.has_port()) {
      set_port(from.port());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MetaRes_Node::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MetaRes_Node::CopyFrom(const MetaRes_Node& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MetaRes_Node::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void MetaRes_Node::Swap(MetaRes_Node* other) {
  if (other != this) {
    std::swap(ip_, other->ip_);
    std::swap(port_, other->port_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MetaRes_Node::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MetaRes_Node_descriptor_;
  metadata.reflection = MetaRes_Node_reflection_;
  return metadata;
}

// -------------------------------------------------------------------

#ifndef _MSC_VER
const int MetaRes::kNodesFieldNumber;
#endif  // !_MSC_VER

MetaRes::MetaRes() : ::google::protobuf::Message() { SharedCtor(); }

void MetaRes::InitAsDefaultInstance() {}

MetaRes::MetaRes(const MetaRes& from) : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MetaRes::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MetaRes::~MetaRes() { SharedDtor(); }

void MetaRes::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MetaRes::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MetaRes::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MetaRes_descriptor_;
}

const MetaRes& MetaRes::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_meta_2eproto();
  return *default_instance_;
}

MetaRes* MetaRes::default_instance_ = NULL;

MetaRes* MetaRes::New() const { return new MetaRes; }

void MetaRes::Clear() {
  nodes_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MetaRes::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) \
  if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (
        ::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .meta.MetaRes.Node nodes = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::
                WIRETYPE_LENGTH_DELIMITED) {
        parse_nodes:
          DO_(::google::protobuf::internal::WireFormatLite::
                  ReadMessageNoVirtual(input, add_nodes()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_nodes;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
            input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MetaRes::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .meta.MetaRes.Node nodes = 1;
  for (int i = 0; i < this->nodes_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        1, this->nodes(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MetaRes::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .meta.MetaRes.Node nodes = 1;
  for (int i = 0; i < this->nodes_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteMessageNoVirtualToArray(1, this->nodes(i), target);
  }

  if (!unknown_fields().empty()) {
    target =
        ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
            unknown_fields(), target);
  }
  return target;
}

int MetaRes::ByteSize() const {
  int total_size = 0;

  // repeated .meta.MetaRes.Node nodes = 1;
  total_size += 1 * this->nodes_size();
  for (int i = 0; i < this->nodes_size(); i++) {
    total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
            this->nodes(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
        ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
            unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MetaRes::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MetaRes* source =
      ::google::protobuf::internal::dynamic_cast_if_available<const MetaRes*>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MetaRes::MergeFrom(const MetaRes& from) {
  GOOGLE_CHECK_NE(&from, this);
  nodes_.MergeFrom(from.nodes_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MetaRes::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MetaRes::CopyFrom(const MetaRes& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MetaRes::IsInitialized() const {

  for (int i = 0; i < nodes_size(); i++) {
    if (!this->nodes(i).IsInitialized()) return false;
  }
  return true;
}

void MetaRes::Swap(MetaRes* other) {
  if (other != this) {
    nodes_.Swap(&other->nodes_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MetaRes::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MetaRes_descriptor_;
  metadata.reflection = MetaRes_reflection_;
  return metadata;
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace meta

// @@protoc_insertion_point(global_scope)
