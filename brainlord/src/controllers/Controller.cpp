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

}
