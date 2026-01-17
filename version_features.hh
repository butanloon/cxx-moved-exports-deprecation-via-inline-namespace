#pragma once

#include "version.hh"

#if (MY_LIB_VERSION_API >= 1345689110) && \
    (MY_LIB_VERSION_ABI >= 1345689310)
#define MY_LIB_FEATURE_NAMESPACE_MOVED
#endif
