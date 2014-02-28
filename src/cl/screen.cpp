#include "cl/screen.hpp"

namespace cl = wnm::cl;

cl::Screen::Screen()
{

}

int cl::Screen::Init()
{
    window = glfwCreateWindow(640, 480, "WeNeedMetal", NULL, NULL);
    if (!window)
    {
        return -1;
    }

    glfwMakeContextCurrent(window);

    return 0;
}
