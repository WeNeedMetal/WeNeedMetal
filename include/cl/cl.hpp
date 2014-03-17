#ifndef _HPP_CL_CL_
#define _HPP_CL_CL_

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
