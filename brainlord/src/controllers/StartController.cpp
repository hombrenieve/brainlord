#include "StartController.h"
#include <cassert>

namespace controllers {

StartController::StartController(models::Game& game) :
	Controller(game)
{ }

StartController::~StartController() {
}

void StartController::start() {
	assert(this->getGame().getState() == models::State::NOT_STARTED);
	this->getGame().setState(models::State::PLAYING);
}

void StartController::accept(ControllerVisitor* visitor) {
	assert(visitor != nullptr);
	visitor->visit(this);
}

}
