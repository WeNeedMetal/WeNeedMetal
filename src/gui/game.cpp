#include "gui/game.hpp"

using namespace WeNeedMetal::gui;

GameControll::GameControll() {
    //pass
};

void GameControll::MouseMove(Vector2 pos) {
	cout << "Mouse:" << pos.x << ',' << pos.y << endl;
};

void GameControll::Rendering() {

};