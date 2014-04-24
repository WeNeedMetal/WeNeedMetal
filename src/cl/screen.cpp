#include "cl/screen.hpp"

using namespace WeNeedMetal::cl;

Screen::Screen()
{
	//ウインドウの作成
    window = glfwCreateWindow(640, 480, "WeNeedMetal", NULL, NULL);
    if (!window)
    {
		throw new exception();
    }

	const GLFWvidmode* mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
    
    std::cout << "Monitor size: " << mode->width << 'x' << mode->height << std::endl;

    glfwMakeContextCurrent(window);

	glfwSetCursorPosCallback(window, [](GLFWwindow* window, double xpos, double ypos){
		cout << "aaa\n" << endl;
	});


	//GUIの登録
	controll = make_shared<GameControll>();

}

Screen::~Screen()
{
	glfwDestroyWindow(window);
}

void Screen::Run()
{
	while(!glfwWindowShouldClose(window))
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
}

