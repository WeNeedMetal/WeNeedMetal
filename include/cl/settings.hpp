#ifndef __HPP_WNM_CL_SETTINGS__
#define __HPP_WNM_CL_SETTINGS__

#include <iostream>

namespace wnm { namespace cl
{
    
    struct Resolution
    {
        int X, Y;
    };

    class Settings
    {
        
    public:
        Settings();

        Resolution resolution;
    };
}}

#endif
