#include "all_features.h"

///////////////////////////UNDEFS/////////////////////////////
/* Can't Be Implemented */
#undef FEATURE_FORCE_LIVEVIEW // Already Live View
#undef FEATURE_MLU // No Mirror
#undef FEATURE_MLU_HANDHELD
#undef FEATURE_STICKY_DOF // No DOF button
#undef FEATURE_IMAGE_EFFECTS // DigicV new effects check "Art Filter"
#undef FEATURE_INTERMEDIATE_ISO_PHOTO_DISPLAY // Well.. it will work in 1 mode
#undef FEATURE_AF_PATTERNS // No regular AF
#undef FEATURE_VOICE_TAGS // Just to be sure
#undef FEATURE_INTERMEDIATE_ISO_PHOTO_DISPLAY
#undef FEATURE_LV_ZOOM_SETTINGS
#undef FEATURE_EXPO_ISO
#undef FEATURE_SHOW_IMAGE_BUFFERS_INFO
#undef FEATURE_SHOW_EDMAC_INFO
#undef FEATURE_SHOW_SIGNATURE

#undef CONFIG_TSKMON

#undef FEATURE_TRAP_FOCUS
#undef FEATURE_FOLLOW_FOCUS
#undef FEATURE_GHOST_IMAGE // No way to pick image but works.
#undef FEATURE_SET_MAINDIAL // Set taken over by Q
#undef FEATURE_PLAY_EXPOSURE_FUSION
#undef FEATURE_PLAY_COMPARE_IMAGES
#undef FEATURE_PLAY_TIMELAPSE
#undef FEATURE_PLAY_EXPOSURE_ADJUST
#undef FEATURE_QUICK_ZOOM
#undef FEATURE_QUICK_ERASE
#undef FEATURE_LV_FOCUS_BOX_FAST
#undef FEATURE_LV_FOCUS_BOX_SNAP
#undef FEATURE_ARROW_SHORTCUTS
#undef FEATURE_MAGIC_ZOOM_FULL_SCREEN // https://bitbucket.org/hudson/magic-lantern/issue/2272/full-screen-magic-zoom-is-garbled-on-700d
#undef FEATURE_HEADPHONE_MONITORING

// for early porting
#undef CONFIG_CRASH_LOG
#undef CONFIG_PROP_REQUEST_CHANGE
#undef CONFIG_AUTOBACKUP_ROM
#undef CONFIG_HELLO_WORLD
#undef CONFIG_DUMPER_BOOTFLAG


/////////////////////////////////DEFINES/////////////////////////
#define FEATURE_EXPO_OVERRIDE
#define FEATURE_CROP_MODE_HACK
#define FEATURE_AUDIO_REMOTE_SHOT
#define FEATURE_FLEXINFO

#define FEATURE_SHOW_TASKS
#define FEATURE_SHOW_CPU_USAGE
#define FEATURE_SHOW_GUI_EVENTS
