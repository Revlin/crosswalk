// Copyright (c) 2013 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef XWALK_RUNTIME_COMMON_XWALK_SWITCHES_H_
#define XWALK_RUNTIME_COMMON_XWALK_SWITCHES_H_

#include "build/build_config.h"

// Defines all command line switches for XWalk.
namespace switches {

extern const char kAppIcon[];
extern const char kDisablePnacl[];
extern const char kExperimentalFeatures[];
extern const char kFullscreen[];
extern const char kListFeaturesFlags[];
extern const char kXWalkAllowExternalExtensionsForRemoteSources[];
extern const char kXWalkDataPath[];

#if defined(OS_ANDROID)
extern const char kXWalkProfileName[];
#endif

}  // namespace switches

#endif  // XWALK_RUNTIME_COMMON_XWALK_SWITCHES_H_
