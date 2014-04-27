#include "cl/cl.hpp"

using namespace WeNeedMetal::cl;

Client::Client()
{
	if(!glfwInit())
		throw new exception();

	screen = make_shared<Screen>();
	screen->Run();
}

Client::~Client()
{
	glfwTerminate();
	cout << "destruct" << endl;
}


