#ifndef _HPP_CL_SCREEN_
#define _HPP_CL_SCREEN_

#include <GLFW/glfw3.h>
#include <iostream>

namespace WeNeedMetal { namespace cl {
    class Screen
    {
    private:
        GLFWwindow* window;
    public:
        Screen();
        int Init();
    };
}}

#endif
