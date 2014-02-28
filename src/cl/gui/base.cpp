#include "cl/gui/base.hpp"

namespace gui = wnm::cl::gui;

void gui::Controll::setParent(Controll* ctrl)
{
    m_parent = ctrl;
}

gui::Controll* gui::Controll::getParent()
{
    return m_parent;
}

