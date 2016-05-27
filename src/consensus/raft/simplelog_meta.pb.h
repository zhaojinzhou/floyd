// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raft/simplelog_meta.proto

#ifndef PROTOBUF_raft_2fsimplelog_5fmeta_2eproto__INCLUDED
#define PROTOBUF_raft_2fsimplelog_5fmeta_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "raft/log_meta.pb.h"
// @@protoc_insertion_point(includes)

namespace floyd {
namespace raft {
namespace simplefilelog {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_raft_2fsimplelog_5fmeta_2eproto();
void protobuf_AssignDesc_raft_2fsimplelog_5fmeta_2eproto();
void protobuf_ShutdownFile_raft_2fsimplelog_5fmeta_2eproto();

class MetaData;

// ===================================================================

class MetaData : public ::google::protobuf::Message {
 public:
  MetaData();
  virtual ~MetaData();

  MetaData(const MetaData& from);

  inline MetaData& operator=(const MetaData& from) {
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
  static const MetaData& default_instance();

  void Swap(MetaData* other);

  // implements Message ----------------------------------------------

  MetaData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MetaData& from);
  void MergeFrom(const MetaData& from);
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

  // required .floyd.raft.log.MetaData raft_metadata = 1;
  inline bool has_raft_metadata() const;
  inline void clear_raft_metadata();
  static const int kRaftMetadataFieldNumber = 1;
  inline const ::floyd::raft::log::MetaData& raft_metadata() const;
  inline ::floyd::raft::log::MetaData* mutable_raft_metadata();
  inline ::floyd::raft::log::MetaData* release_raft_metadata();
  inline void set_allocated_raft_metadata(::floyd::raft::log::MetaData* raft_metadata);

  // required uint64 entries_start = 2;
  inline bool has_entries_start() const;
  inline void clear_entries_start();
  static const int kEntriesStartFieldNumber = 2;
  inline ::google::protobuf::uint64 entries_start() const;
  inline void set_entries_start(::google::protobuf::uint64 value);

  // required uint64 entries_end = 3;
  inline bool has_entries_end() const;
  inline void clear_entries_end();
  static const int kEntriesEndFieldNumber = 3;
  inline ::google::protobuf::uint64 entries_end() const;
  inline void set_entries_end(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:floyd.raft.simplefilelog.MetaData)
 private:
  inline void set_has_raft_metadata();
  inline void clear_has_raft_metadata();
  inline void set_has_entries_start();
  inline void clear_has_entries_start();
  inline void set_has_entries_end();
  inline void clear_has_entries_end();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::floyd::raft::log::MetaData* raft_metadata_;
  ::google::protobuf::uint64 entries_start_;
  ::google::protobuf::uint64 entries_end_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_raft_2fsimplelog_5fmeta_2eproto();
  friend void protobuf_AssignDesc_raft_2fsimplelog_5fmeta_2eproto();
  friend void protobuf_ShutdownFile_raft_2fsimplelog_5fmeta_2eproto();

  void InitAsDefaultInstance();
  static MetaData* default_instance_;
};
// ===================================================================


// ===================================================================

// MetaData

// required .floyd.raft.log.MetaData raft_metadata = 1;
inline bool MetaData::has_raft_metadata() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MetaData::set_has_raft_metadata() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MetaData::clear_has_raft_metadata() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MetaData::clear_raft_metadata() {
  if (raft_metadata_ != NULL) raft_metadata_->::floyd::raft::log::MetaData::Clear();
  clear_has_raft_metadata();
}
inline const ::floyd::raft::log::MetaData& MetaData::raft_metadata() const {
  return raft_metadata_ != NULL ? *raft_metadata_ : *default_instance_->raft_metadata_;
}
inline ::floyd::raft::log::MetaData* MetaData::mutable_raft_metadata() {
  set_has_raft_metadata();
  if (raft_metadata_ == NULL) raft_metadata_ = new ::floyd::raft::log::MetaData;
  return raft_metadata_;
}
inline ::floyd::raft::log::MetaData* MetaData::release_raft_metadata() {
  clear_has_raft_metadata();
  ::floyd::raft::log::MetaData* temp = raft_metadata_;
  raft_metadata_ = NULL;
  return temp;
}
inline void MetaData::set_allocated_raft_metadata(::floyd::raft::log::MetaData* raft_metadata) {
  delete raft_metadata_;
  raft_metadata_ = raft_metadata;
  if (raft_metadata) {
    set_has_raft_metadata();
  } else {
    clear_has_raft_metadata();
  }
}

// required uint64 entries_start = 2;
inline bool MetaData::has_entries_start() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MetaData::set_has_entries_start() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MetaData::clear_has_entries_start() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MetaData::clear_entries_start() {
  entries_start_ = GOOGLE_ULONGLONG(0);
  clear_has_entries_start();
}
inline ::google::protobuf::uint64 MetaData::entries_start() const {
  return entries_start_;
}
inline void MetaData::set_entries_start(::google::protobuf::uint64 value) {
  set_has_entries_start();
  entries_start_ = value;
}

// required uint64 entries_end = 3;
inline bool MetaData::has_entries_end() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MetaData::set_has_entries_end() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MetaData::clear_has_entries_end() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MetaData::clear_entries_end() {
  entries_end_ = GOOGLE_ULONGLONG(0);
  clear_has_entries_end();
}
inline ::google::protobuf::uint64 MetaData::entries_end() const {
  return entries_end_;
}
inline void MetaData::set_entries_end(::google::protobuf::uint64 value) {
  set_has_entries_end();
  entries_end_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace simplefilelog
}  // namespace raft
}  // namespace floyd

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_raft_2fsimplelog_5fmeta_2eproto__INCLUDED
