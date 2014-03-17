#ifndef __HPP_CL_CL__
#define __HPP_CL_CL__

#include "settings.hpp"
#include "screen.hpp"

namespace WeNeedMetal { namespace cl
{
    class Client
    {
    private:
        Settings settings;
        Screen screen;

    public:
        Client();
        void run();
    };
}}

#endif
