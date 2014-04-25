#ifndef _HPP_CL_CL_
#define _HPP_CL_CL_

#include <vector>
#include <memory>

#include "cl/settings.hpp"
#include "cl/screen.hpp"

using namespace std;

namespace WeNeedMetal { namespace cl {
    class Client
    {
    private:
		
        Settings settings;
		shared_ptr<Screen> screen;

		
    public:
        Client();
		~Client();

    };
}}

#endif
