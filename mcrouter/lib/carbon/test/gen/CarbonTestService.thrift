/*
 *  Copyright (c) Meta Platforms, Inc. and affiliates.
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
include "mcrouter/lib/network/gen/Common.thrift"
include "mcrouter/lib/carbon/test/gen/CarbonTest.thrift"

include "common/fb303/if/fb303.thrift"

cpp_include "mcrouter/lib/carbon/test/gen/CarbonTestMessages.h"

namespace cpp2 carbon.test.thrift
namespace py3 carbon.test.thrift

service CarbonTest extends fb303.FacebookService {
  TestReply_472 test(1:TestRequest_3222 request) (thread = "eb")
  TestReplyStringKey_1518 testStringKey(1:TestRequestStringKey_9666 request) (thread = "eb")
  McVersionReply_547 mcVersion(1:McVersionRequest_3066 request) (thread = "eb")
}

// The following were automatically generated and may benefit from renaming.
typedef Common.McVersionReply (cpp.type = "facebook::memcache::McVersionReply") McVersionReply_547
typedef Common.McVersionRequest (cpp.type = "facebook::memcache::McVersionRequest") McVersionRequest_3066
typedef CarbonTest.TestReplyStringKey (cpp.type = "carbon::test::TestReplyStringKey") TestReplyStringKey_1518
typedef CarbonTest.TestReply (cpp.type = "carbon::test::TestReply") TestReply_472
typedef CarbonTest.TestRequestStringKey (cpp.type = "carbon::test::TestRequestStringKey") TestRequestStringKey_9666
typedef CarbonTest.TestRequest (cpp.type = "carbon::test::TestRequest") TestRequest_3222
