#pragma once

#include "version_features.hh"

namespace my_lib {

#if defined(MY_LIB_FEATURE_NAMESPACE_MOVED)
inline
#endif
namespace moved_namespace {

struct Moved {
  bool value{false};
};

} /// namespace moved_namespace

} /// namespace my_lib
