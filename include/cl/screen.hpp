#ifndef _HPP_CL_SCREEN_
#define _HPP_CL_SCREEN_

#include <iostream>
#include <memory>
#include <functional>

#include <GLFW/glfw3.h>

#include "gui/base.hpp"
#include "gui/game.hpp"

using namespace WeNeedMetal::gui;

namespace WeNeedMetal { namespace cl {
    class Screen
    {
    private:
        GLFWwindow* window;
		unique_ptr<Controll> controll;

		static void CallbackCursorPos(GLFWwindow* window, double xpos, double ypos);

    public:
        Screen();
		~Screen();
		void Run();
    };
}}

#endif
