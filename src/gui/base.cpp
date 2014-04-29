#include "gui/base.hpp"

using namespace WeNeedMetal;
using namespace WeNeedMetal::gui;

Controll::Controll(Vector2 size, weak_ptr<Controll> parent)
	: size(size) , parent(parent)
{ }

void Controll::SetParent(weak_ptr<Controll> ctrl) {
    parent = ctrl;
}

weak_ptr<Controll> Controll::GetParent() {
    return parent;
}

bool Controll::IsRoot() {
	return parent.expired();
}

void PushMatrix() {
	GL::
}

void Controll::CallbackMouseMove(Vector2 pos) { }
void Controll::CallbackMouseEnter() { }
void Controll::CallbackMouseLeave() { }
void Controll::CallbackKeyPress(Keyboard key) { }
void Controll::CallbackKeyRepeat(Keyboard key) { }
void Controll::CallbackKeyRelease(Keyboard key) { }
void Controll::CallbackCharEnter(char c) { }
void Controll::CallbackMousePress(Mouse mouse) { }
void Controll::CallbackMouseRelease(Mouse mouse) { }
void Controll::CallbackWheel(double wheel) { }

void Controll::ChangeSize(Vector2 size) {
	this->size = size;
	cout << size.x << ',' << size.y << endl;
}

Vector2 Controll::GetSize() {
	return size;
}

void Controll::Rendering() { }

