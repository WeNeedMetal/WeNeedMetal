#include "gui/base.hpp"

using namespace WeNeedMetal::gui;

void Controll::setParent(Controll* ctrl)
{
    m_parent = ctrl;
}

Controll* Controll::getParent()
{
    return m_parent;
}

