#ifndef _HPP_CL_SCREEN_
#define _HPP_CL_SCREEN_

#include <iostream>
#include <memory>
#include <functional>

#include <GLFW/glfw3.h>

#include "structs/keyboard.hpp"
#include "gui/base.hpp"
#include "gui/game.hpp"

using namespace WeNeedMetal::gui;

namespace WeNeedMetal { namespace cl {
    class Screen {
    private:
        GLFWwindow* window;
		shared_ptr<Controll> controll;

		static shared_ptr<Controll> CallbackPointer(GLFWwindow* window);

		static void CallbackCursorPos(GLFWwindow* window, double xpos, double ypos);
		static void CallbackCursorEnter(GLFWwindow* window, int entered);
		static void CallbackKeyEnter(GLFWwindow* window, int key, int scancode, int action, int mods);
		static void CallbackCharEnter(GLFWwindow* window, unsigned int codepoint);
		static void CallbackMouseButton(GLFWwindow* window, int button, int action, int mods);
		static void CallbackScroll(GLFWwindow* window, double xoffset, double yoffset);

    public:
        Screen();
		~Screen();
		void Run();

		Vector2i GetScreenSize();
    };
}}

#endif
