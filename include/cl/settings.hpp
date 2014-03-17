#ifndef _HPP_WNM_CL_SETTINGS_
#define _HPP_WNM_CL_SETTINGS_

#include <iostream>

namespace WeNeedMetal { namespace cl
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
