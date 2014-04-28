#include "cl/screen.hpp"

using namespace WeNeedMetal::cl;

Screen::Screen()
{

	//ウインドウ生成
    window = glfwCreateWindow(640, 480, "WeNeedMetal", NULL, NULL);
    if (!window) throw new exception();

	const GLFWvidmode* mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
    
    cout << "Monitor size: " << mode->width << ':' << mode->height << endl;



    glfwMakeContextCurrent(window);

	//コールバック登録
	glfwSetWindowUserPointer(window, this);
	glfwSetCursorPosCallback(window, CallbackCursorPos);
	glfwSetCursorEnterCallback(window, CallbackCursorEnter);
	glfwSetKeyCallback(window, CallbackKeyEnter);
	glfwSetCharCallback(window, CallbackCharEnter);
	glfwSetMouseButtonCallback(window, CallbackMouseButton);
	glfwSetScrollCallback(window, CallbackScroll);

	//GUI登録
	controll = unique_ptr<Controll>(new GameControll());

}

Screen::~Screen()
{
	glfwDestroyWindow(window);
	cout << "window destruct" << endl;
}

void Screen::Run()
{
	while(!glfwWindowShouldClose(window))
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
}


Controll* Screen::CallbackPointer(GLFWwindow* window) {
	return ((Screen*)glfwGetWindowUserPointer(window))->controll.get();
}

void Screen::CallbackCursorPos(GLFWwindow* window, double xpos, double ypos) {
	CallbackPointer(window)->CallbackMouseMove(Vector2(xpos, ypos));
}

void Screen::CallbackCursorEnter(GLFWwindow* window, int status) {
	auto ptr = CallbackPointer(window);
	switch (status)	{
	case GL_TRUE:
		ptr->CallbackMouseEnter();
		break;
	case GL_FALSE:
		ptr->CallbackMouseLeave();
		break;
	}
}

//key http://www.glfw.org/docs/latest/group__keys.html
//scancode maybe not use
//mods http://www.glfw.org/docs/latest/group__mods.html
void Screen::CallbackKeyEnter(GLFWwindow* window, int key, int scancode, int action, int mods) {
	auto ptr = CallbackPointer(window);
	auto input = Keyboard(key, scancode, mods);
	switch (action)
	{
	case GLFW_PRESS:
		ptr->CallbackKeyPress(input);
		break;
	case GLFW_RELEASE:
		ptr->CallbackKeyRelease(input);
		break;
	case GLFW_REPEAT:
		ptr->CallbackKeyRepeat(input);
		break;
	}
}

void Screen::CallbackCharEnter(GLFWwindow* window, unsigned int codepoint) {
	CallbackPointer(window)->CallbackCharEnter((char)codepoint); //needfix "not asscii" bug
}

void Screen::CallbackMouseButton(GLFWwindow* window, int button, int action, int mods) {
	auto ptr = CallbackPointer(window);
	auto mouse = Mouse(button, mods);
	switch (action)
	{
	case GLFW_PRESS:
		ptr->CallbackMousePress(mouse);
		break;
	case GLFW_RELEASE:
		ptr->CallbackMouseRelease(mouse);
		break;
	}
}

void Screen::CallbackScroll(GLFWwindow* window, double xoffset, double yoffset) {
	CallbackPointer(window)->CallbackWheel(yoffset);
}
