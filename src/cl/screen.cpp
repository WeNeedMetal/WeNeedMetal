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
	switch (status)	{
	case GL_TRUE:
		CallbackPointer(window)->CallbackMouseEnter();
		break;
	case GL_FALSE:
		CallbackPointer(window)->CallbackMouseLeave();
		break;
	}
}