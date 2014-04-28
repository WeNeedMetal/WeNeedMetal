#include "gui/game.hpp"

using namespace WeNeedMetal::gui;

GameControll::GameControll(Vector2 size)
	: Controll(size)
{ }

void GameControll::CallbackMouseMove(Vector2 pos) {

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
	glBegin(GL_QUADS);
		glColor3ub(0xFF, 0, 0);
		glVertex2d(0, 0);
		glColor3ub(0, 0xFF, 0);
		glVertex2d(1, 0);
		glColor3ub(

		
	glEnd();
}