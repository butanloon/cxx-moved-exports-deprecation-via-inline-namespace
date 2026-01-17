#pragma once

#include "version.hh"

namespace my_lib {

struct Old {
  int value{0};
};

} /// namespace my_lib

#include "moved.hh"

namespace my_lib {

#if !defined(MY_LIB_FEATURE_NAMESPACE_MOVED)

#if defined(IGNORE_MOVED_DEFINITIONS_DEPRECATION)
#define CONDITIONALLY_DEPRECATED(x)
#else
#define CONDITIONALLY_DEPRECATED(x) [[deprecated(\
  "Include <moved.h> and use moved_namespace::" #x " or define "\
  "IGNORE_MOVED_TYPE_ALIASES_DEPRECATION to supress deprecation "\
  "warnings but, please, note: namespace moved_namespace "\
  "will be inlined and its definitions will be available in "\
  "my_lib namespace after removal of type alias " #x " "\
  "therefore only \"#include <moved.h>\" will be required"\
)]]
#endif

using Moved CONDITIONALLY_DEPRECATED(Moved) = moved_namespace::Moved;

#undef CONDITIONALLY_DEPRECATED

#endif

} /// namespace my_lib
