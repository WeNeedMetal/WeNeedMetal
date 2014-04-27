#include "gui/base.hpp"

using namespace WeNeedMetal;
using namespace WeNeedMetal::gui;

void Controll::setParent(Controll* ctrl) {
    m_parent = ctrl;
}

Controll* Controll::getParent() {
    return m_parent;
}

void Controll::CallbackMouseMove(Vector2 pos) { }
void Controll::CallbackMouseEnter() { }
void Controll::CallbackMouseLeave() { }

void Controll::Rendering() { }

