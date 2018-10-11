#include "Controller.h"

namespace controllers {
Controller::Controller(models::Game& game) :
	game(game)
{ }

Controller::~Controller() {
}

models::Game& Controller::getGame() {
	return game;
}

models::State Controller::getState() {
	return this->getGame().getState();
}

void Controller::setState(models::State state) {
	this->getGame().setState(state);
}

void Controller::write() {
	this->getGame().write();
}

}
