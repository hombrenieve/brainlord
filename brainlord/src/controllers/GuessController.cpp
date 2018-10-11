#include "GuessController.h"
#include <cassert>

namespace controllers {

GuessController::GuessController(models::Game& game) :
	Controller(game)
{ }

GuessController::~GuessController() {
}

void GuessController::control() {
	assert(this->getState() == models::State::PLAYING);
	this->setState(models::State::EXIT);
}

}
