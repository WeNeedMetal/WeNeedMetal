#include "gui/game.hpp"

using namespace WeNeedMetal::gui;

GameControll::GameControll() {
    //pass
};

void GameControll::CallbackMouseMove(Vector2 pos) {
	cout << "Mouse:" << pos.x << ',' << pos.y << endl;
};

void GameControll::CallbackMouseEnter() {
	cout << "Mouse Enter" << endl;
};

void GameControll::CallbackMouseLeave() {
	cout << "Mouse Leave" << endl;
};

void GameControll::Rendering() {

};