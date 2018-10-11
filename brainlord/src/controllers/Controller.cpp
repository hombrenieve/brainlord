#include "Controller.h"

namespace controllers {
controllers::Controller::Controller(models::Game& game) :
	game(game)
{ }

controllers::Controller::~Controller() {
}

models::Game& controllers::Controller::getGame() {
	return game;
}
}
