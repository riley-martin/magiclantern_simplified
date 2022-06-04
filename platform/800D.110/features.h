// TODO: this is just pasted from 200D.101/features.h
//#define CONFIG_HELLO_WORLD

#define FEATURE_VRAM_RGBA

// Don't Click Me menu looks to be intended as a place
// for devs to put custom code in debug.c run_test(),
// and allowing triggering from a menu context.
#define FEATURE_DONT_CLICK_ME

// "working" - but is the number correct?
#define FEATURE_SHOW_SHUTTER_COUNT

// working but slightly hackish, don't yet have a good
// way to determine free stack size
#define FEATURE_SHOW_FREE_MEMORY

// partially working; wrong colorspace and not
// dumping all the images that old cams support
#define FEATURE_SCREENSHOT

// Testing disabling 30min LV timer.
// This requires prop_request_change!
// Also requires LV and State objects; but you
// don't need any actual objects found in state-object.h
#define CONFIG_PROP_REQUEST_CHANGE
#define CONFIG_STATE_OBJECT_HOOKS
#define CONFIG_LIVEVIEW
#define FEATURE_POWERSAVE_LIVEVIEW

// mostly working - task display is too crowded.
// Maybe CPU usage should update faster?
#define CONFIG_TSKMON
#define FEATURE_SHOW_TASKS
#define FEATURE_SHOW_CPU_USAGE
#define FEATURE_SHOW_GUI_EVENTS

// enable global draw
#define FEATURE_GLOBAL_DRAW
#define FEATURE_CROPMARKS

// prevent ML attempting stack unwinding in some cases.
// This does not yet work (assumes ARM, not Thumb).  Alex recommends
// a good looking fix:
// http://www.mcternan.me.uk/ArmStackUnwinding/
#undef CONFIG_CRASH_LOG

#undef CONFIG_ADDITIONAL_VERSION
#undef CONFIG_AUTOBACKUP_ROM
