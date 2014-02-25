#ifndef __HPP_CL_CL__
#define __HPP_CL_CL__

#include "settings.hpp"

namespace wnm { namespace cl
{
    class Client
    {
    private:
        Settings settings;

    public:
        Client();
        void run();
    };
}}

#endif
