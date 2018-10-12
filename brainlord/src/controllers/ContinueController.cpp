#include "ContinueController.h"
#include <cassert>

namespace controllers {

ContinueController::ContinueController(models::Game& game) :
	Controller(game)
{ }

ContinueController::~ContinueController() {
}

void controllers::ContinueController::control() {
	assert(this->getState() == models::State::ENDING);
	this->setState(models::State::EXIT);
}

}
