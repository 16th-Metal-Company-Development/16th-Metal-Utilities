#define MAINPREFIX z
#define PREFIX MET

#include "script_version.hpp"

#define VERSION MAJOR.MINOR
#define VERSION_AR MAJOR,MINOR,PATCH,BUILD

#define REQUIRED_VERSION 2.12

// Uncomment to disable the Aurebesh font replacement, rebuild and push an update.
#define AUREBESH_DISABLED

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(MET - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(MET - COMPONENT)
#endif
