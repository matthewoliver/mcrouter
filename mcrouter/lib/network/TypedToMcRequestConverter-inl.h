/*
 *  Copyright (c) 2016, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
namespace facebook {
namespace memcache {

namespace {
template <class UpdateType>
void updateHelper(TypedThriftMessage<UpdateType>&& treq,
                  McRequestWithMcOp<mc_op_lease_get>& req) {
  req.setLeaseToken(treq->leaseToken);
}

template <class UpdateType>
void updateHelper(TypedThriftMessage<UpdateType>&& treq,
                  McRequestWithMcOp<mc_op_cas>& req) {
  req.setCas(treq->casToken);
}

template <class UpdateType, class Operation>
void updateHelper(TypedThriftMessage<UpdateType>&& treq,
                  McRequestWithOp<Operation>& req) {
  // no-op
}
} // anonymous

template <class GetType>
McRequestWithMcOp<OpFromType<GetType, RequestOpMapping>::value>
convertToMcRequest(TypedThriftMessage<GetType>&& treq,
                   GetLikeT<TypedThriftMessage<GetType>>) {
  constexpr mc_op_t op = OpFromType<GetType, RequestOpMapping>::value;
  McRequestWithMcOp<op> req;
  req.setKey(std::move(treq->key));
  return req;
}

template <class UpdateType>
McRequestWithMcOp<OpFromType<UpdateType, RequestOpMapping>::value>
convertToMcRequest(TypedThriftMessage<UpdateType>&& treq,
                   UpdateLikeT<TypedThriftMessage<UpdateType>>) {
  constexpr mc_op_t op = OpFromType<UpdateType, RequestOpMapping>::value;
  McRequestWithMcOp<op> req;
  req.setKey(std::move(treq->key));
  req.setExptime(treq->exptime);
  req.setFlags(treq->flags);
  req.setValue(std::move(treq->value));
  updateHelper(std::move(treq), req);
  return req;
}

template <class DeleteType>
McRequestWithMcOp<OpFromType<DeleteType, RequestOpMapping>::value>
convertToMcRequest(TypedThriftMessage<DeleteType>&& treq,
                   DeleteLikeT<TypedThriftMessage<DeleteType>>) {
  constexpr mc_op_t op = OpFromType<DeleteType, RequestOpMapping>::value;
  McRequestWithMcOp<op> req;
  req.setKey(std::move(treq->key));
  if (treq->__isset.exptime) {
    req.setExptime(treq->exptime);
  }
  return req;
}

template <class ArithType>
McRequestWithMcOp<OpFromType<ArithType, RequestOpMapping>::value>
convertToMcRequest(TypedThriftMessage<ArithType>&& treq,
                   ArithmeticLikeT<TypedThriftMessage<ArithType>>) {
  constexpr mc_op_t op = OpFromType<ArithType, RequestOpMapping>::value;
  McRequestWithMcOp<op> req;
  req.setKey(std::move(treq->key));
  req.setDelta(treq->delta);
  return req;
}

inline McRequestWithMcOp<mc_op_version> convertToMcRequest(
    TypedThriftMessage<cpp2::McVersionRequest>&& treq) {
  return {};
}

} // memcache
} // facebook