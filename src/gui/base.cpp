#include "gui/base.hpp"

using namespace WeNeedMetal;
using namespace WeNeedMetal::gui;

Controll::Controll(Vector2i size, weak_ptr<Controll> parent)
	: parent(parent)
{
	ChangeSize(size);
}

void Controll::SetParent(weak_ptr<Controll> ctrl) {
    parent = ctrl;
}

weak_ptr<Controll> Controll::GetParent() {
    return parent;
}

bool Controll::IsRoot() {
	return parent.expired();
}

void Controll::ApplyMatrix() {
	GL::MultMatrix(position);
}

void Controll::CallbackMouseMove(Vector2i pos) { }
void Controll::CallbackMouseEnter() { }
void Controll::CallbackMouseLeave() { }
void Controll::CallbackKeyPress(Keyboard key) { }
void Controll::CallbackKeyRepeat(Keyboard key) { }
void Controll::CallbackKeyRelease(Keyboard key) { }
void Controll::CallbackCharEnter(char c) { }
void Controll::CallbackMousePress(Mouse mouse) { }
void Controll::CallbackMouseRelease(Mouse mouse) { }
void Controll::CallbackWheel(double wheel) { }

void Controll::ChangeSize(Vector2i size) {
	this->size = size;
	position = Matrix4::FromTranslate(-1.0, 1.0, 0.0) * Matrix4::FromScale(2.0 / size.x, -2.0 / size.y , 1.0);
}

Vector2i Controll::GetSize() {
	return size;
}

void Controll::Rendering() { }

