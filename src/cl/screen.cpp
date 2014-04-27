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

void Screen::CallbackCursorPos(GLFWwindow* window, double xpos, double ypos)
{
	auto screen = static_cast<Screen*>(glfwGetWindowUserPointer(window));
	screen->controll->MouseMove(Vector2(xpos, ypos));
}
