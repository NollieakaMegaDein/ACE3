#define COMPONENT gforces
#include "\z\ace\Addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_GFORCES
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_GFORCES
    #define DEBUG_SETTINGS DEBUG_SETTINGS_GFORCES
#endif

#include "\z\ace\Addons\main\script_macros.hpp"

#define AVERAGEDURATION 6
#define INTERVAL 0.20
#define MAXVIRTUALG 5.0
#define MINVIRTUALG 2.5
