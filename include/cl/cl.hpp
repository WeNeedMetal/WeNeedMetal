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
		shared_ptr<Screen> screen;

    public:
        Client();
		~Client();

		void InputSetCursorPosCallback(GLFWwindow* window, double xpos, double ypos);
    };
}}

#endif
