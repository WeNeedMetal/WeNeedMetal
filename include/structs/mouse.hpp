#ifndef _HPP_WNM_MOUSE_
#define _HPP_WNM_MOUSE_

#include <GLFW/glfw3.h>

#include "keymods.hpp"

namespace WeNeedMetal {
	struct Mouse {
	private:
		int button, mods;
	public:
		Mouse(int button, int mods)
			: button(button), mods(mods) 
		{ }

		enum MouseButton {
			Mouse1 = GLFW_MOUSE_BUTTON_1,
			Mouse2 = GLFW_MOUSE_BUTTON_2,
			Mouse3 = GLFW_MOUSE_BUTTON_3,
			Mouse4 = GLFW_MOUSE_BUTTON_4,
			Mouse5 = GLFW_MOUSE_BUTTON_5,
			Mouse6 = GLFW_MOUSE_BUTTON_6,
			Mouse7 = GLFW_MOUSE_BUTTON_7,
			Mouse8 = GLFW_MOUSE_BUTTON_8,
			MouseLast = GLFW_MOUSE_BUTTON_LAST,
			MouseLeft = GLFW_MOUSE_BUTTON_LEFT,
			MouseRight = GLFW_MOUSE_BUTTON_RIGHT,
			MouseMiddle = GLFW_MOUSE_BUTTON_MIDDLE
		};

		MouseButton GetButton() {
			return (MouseButton)button;
		}

		bool IsMods(KeyMods mod) {
			return mod && mods;
		}
	};
}

#endif