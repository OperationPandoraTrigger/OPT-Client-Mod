#define PATH opt
#define PREFIX opt
#define MOD opt_client

// Define version information of this mod
#define MAJOR 2
#define MINOR 9
#define PATCHLVL 4
#define BUILD 0

#ifdef VERSION
    #undef VERSION
#endif
#ifdef VERSION_AR
    #undef VERSION_AR
#endif

#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD
#define VERSION MAJOR.MINOR.PATCHLVL.BUILD