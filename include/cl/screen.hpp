#ifndef __HPP_CL_SCREEN__
#define __HPP_CL_SCREEN__

#include <GLFW/glfw3.h>
#include <iostream>

namespace wnm { namespace cl {
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
