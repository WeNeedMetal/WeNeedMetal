#ifndef _HPP_CL_SCREEN_
#define _HPP_CL_SCREEN_

#include <iostream>
#include <memory>
#include <functional>
#include <vector>

#include <GLFW/glfw3.h>

#include "gui/base.hpp"
#include "gui/game.hpp"
#include "cl/cl.hpp"

using namespace WeNeedMetal::gui;

namespace WeNeedMetal { namespace cl {
    class Screen
    {
    private:
        GLFWwindow* window;
		shared_ptr<Controll> controll;


		static vector<unique_ptr<Screen>> screens;
		static void InputSetCursorPosCallback(GLFWwindow* window, double xpos, double ypos);

    public:
        Screen();
		~Screen();
		void Run();
    };
}}

#endif
