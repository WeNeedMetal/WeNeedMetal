#include "gui/base.hpp"

namespace gui = WeNeedMetal::gui;

void gui::Controll::setParent(Controll* ctrl)
{
    m_parent = ctrl;
}

gui::Controll* gui::Controll::getParent()
{
    return m_parent;
}

