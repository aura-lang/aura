#ifndef AURA_API
    #ifdef AURA_LIB_SHARED
        #define AURA_API __declspec(dllexport)
    #else
        #define AURA_API __declspec(dllimport)
    #endif
#endif
