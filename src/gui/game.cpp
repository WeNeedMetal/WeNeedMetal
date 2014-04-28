#include "gui/game.hpp"

using namespace WeNeedMetal::gui;

GameControll::GameControll() {
    //pass
}

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

}