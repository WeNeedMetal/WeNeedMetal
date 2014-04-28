#include "gui/game.hpp"

using namespace WeNeedMetal::gui;

GameControll::GameControll(Vector2 size)
	: Controll(size)
{ }

void GameControll::CallbackMouseMove(Vector2 pos) {
	mouse = pos;
}

void GameControll::CallbackMouseEnter() {
	cout << "Mouse Enter" << endl;
}

void GameControll::CallbackMouseLeave() {
	cout << "Mouse Leave" << endl;
}

void GameControll::CallbackKeyPress(Keyboard key) {
}


void GameControll::CallbackCharEnter(char c) {
	cout << c << endl;
}

void GameControll::CallbackMousePress(Mouse mouse) {
	cout << "Mouse clicked!!  " << mouse.GetButton() << endl; 
}

void GameControll::CallbackWheel(double wheel) {
	cout << "Mouse wheeled!!  " << wheel << endl;
}

void GameControll::Rendering() {
	auto size = GetSize();
	double x = size.x / mouse.x * 2 - 1.0;
	double y = size.y / mouse.y * 2 - 1.0;
	glBegin(GL_QUADS);
		glColor3ub(0xFF, 0, 0);
		glVertex2d(-1, -1);
		glColor3ub(0, 0xFF, 0);
		glVertex2d(x, -1);
		glColor3ub(0, 0, 0xFF);
		glVertex2d(x, y);
		glColor3ub(0, 0, 0);
		glVertex2d(-1, y);
	glEnd();
}