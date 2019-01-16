/*
 *  Copyright (c) 2017-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <string>
#include <utility>

#include <mcrouter/lib/RouteHandleTraverser.h>

#include "mcrouter/lib/network/gen/MemcacheMessages.h"

namespace facebook {
namespace memcache {

template <class Route>
class MemcacheRouteHandle;

class MemcacheRouteHandleIf {
 public:
  template <class Route>
  using Impl = MemcacheRouteHandle<Route>;

  /**
   * Returns a string identifying this route handle instance
   */
  virtual std::string routeName() const = 0;

  virtual ~MemcacheRouteHandleIf() = default;

  virtual McAddReply route(const McAddRequest&) = 0;
  virtual McAppendReply route(const McAppendRequest&) = 0;
  virtual McCasReply route(const McCasRequest&) = 0;
  virtual McDecrReply route(const McDecrRequest&) = 0;
  virtual McDeleteReply route(const McDeleteRequest&) = 0;
  virtual McFlushAllReply route(const McFlushAllRequest&) = 0;
  virtual McFlushReReply route(const McFlushReRequest&) = 0;
  virtual McGatReply route(const McGatRequest&) = 0;
  virtual McGatsReply route(const McGatsRequest&) = 0;
  virtual McGetReply route(const McGetRequest&) = 0;
  virtual McGetsReply route(const McGetsRequest&) = 0;
  virtual McIncrReply route(const McIncrRequest&) = 0;
  virtual McLeaseGetReply route(const McLeaseGetRequest&) = 0;
  virtual McLeaseSetReply route(const McLeaseSetRequest&) = 0;
  virtual McMetagetReply route(const McMetagetRequest&) = 0;
  virtual McPrependReply route(const McPrependRequest&) = 0;
  virtual McReplaceReply route(const McReplaceRequest&) = 0;
  virtual McSetReply route(const McSetRequest&) = 0;
  virtual McTouchReply route(const McTouchRequest&) = 0;

  virtual void traverse(
      const McAddRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McAppendRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McCasRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McDecrRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McDeleteRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McFlushAllRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McFlushReRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McGatRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McGatsRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McGetRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McGetsRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McIncrRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McLeaseGetRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McLeaseSetRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McMetagetRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McPrependRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McReplaceRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McSetRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
  virtual void traverse(
      const McTouchRequest&,
      const RouteHandleTraverser<MemcacheRouteHandleIf>&) const = 0;
};

template <class Route>
class MemcacheRouteHandle : public MemcacheRouteHandleIf {
 public:
  template <class... Args>
  explicit MemcacheRouteHandle(Args&&... args)
      : route_(std::forward<Args>(args)...) {}
  std::string routeName() const override final {
    return route_.routeName();
  }

  McAddReply route(const McAddRequest& request) override final {
    return route_.route(request);
  }
  McAppendReply route(const McAppendRequest& request) override final {
    return route_.route(request);
  }
  McCasReply route(const McCasRequest& request) override final {
    return route_.route(request);
  }
  McDecrReply route(const McDecrRequest& request) override final {
    return route_.route(request);
  }
  McDeleteReply route(const McDeleteRequest& request) override final {
    return route_.route(request);
  }
  McFlushAllReply route(const McFlushAllRequest& request) override final {
    return route_.route(request);
  }
  McFlushReReply route(const McFlushReRequest& request) override final {
    return route_.route(request);
  }
  McGatReply route(const McGatRequest& request) override final {
    return route_.route(request);
  }
  McGatsReply route(const McGatsRequest& request) override final {
    return route_.route(request);
  }
  McGetReply route(const McGetRequest& request) override final {
    return route_.route(request);
  }
  McGetsReply route(const McGetsRequest& request) override final {
    return route_.route(request);
  }
  McIncrReply route(const McIncrRequest& request) override final {
    return route_.route(request);
  }
  McLeaseGetReply route(const McLeaseGetRequest& request) override final {
    return route_.route(request);
  }
  McLeaseSetReply route(const McLeaseSetRequest& request) override final {
    return route_.route(request);
  }
  McMetagetReply route(const McMetagetRequest& request) override final {
    return route_.route(request);
  }
  McPrependReply route(const McPrependRequest& request) override final {
    return route_.route(request);
  }
  McReplaceReply route(const McReplaceRequest& request) override final {
    return route_.route(request);
  }
  McSetReply route(const McSetRequest& request) override final {
    return route_.route(request);
  }
  McTouchReply route(const McTouchRequest& request) override final {
    return route_.route(request);
  }

  void traverse(
      const McAddRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McAppendRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McCasRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McDecrRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McDeleteRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McFlushAllRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McFlushReRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McGatRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McGatsRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McGetRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McGetsRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McIncrRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McLeaseGetRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McLeaseSetRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McMetagetRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McPrependRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McReplaceRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McSetRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const McTouchRequest& request,
      const RouteHandleTraverser<MemcacheRouteHandleIf>& traverser)
      const override final {
    route_.traverse(request, traverser);
  }

 private:
  Route route_;
};
} // namespace memcache
} // namespace facebook
