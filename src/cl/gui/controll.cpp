#include "cl/gui/controll.hpp"

namespace gui = wnm::cl::gui;

void gui::controll::setParent(controll* ctrl)
{
    this->m_parent = ctrl;
}

