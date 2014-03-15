#ifndef __HPP_WNM_CL_SETTINGS__
#define __HPP_WNM_CL_SETTINGS__

#include <iostream>

namespace wnm { namespace cl
{
    
    struct Resolution
    {
		Resolution(int X, int Y)
			:X(X), Y(Y) { }
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
