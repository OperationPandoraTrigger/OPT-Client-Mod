// Define version information of this mod
#define MAJOR 3
#define MINOR 5
#define PATCHLVL 0
#define BUILD 265

#ifdef VERSION
    #undef VERSION
#endif
#ifdef VERSION_AR
    #undef VERSION_AR
#endif

#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD
#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
