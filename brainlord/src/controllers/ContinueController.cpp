#include "ContinueController.h"
#include <cassert>

namespace controllers {

ContinueController::ContinueController(models::Game& game) :
	Controller(game)
{ }

ContinueController::~ContinueController() {
}

void ContinueController::accept(ControllerVisitor* visitor) {
	assert(visitor != nullptr);
	visitor->visit(this);
}

void ContinueController::doContinue() {
	assert(this->getGame().getState() == models::State::ENDING);
	this->getGame().clear();
	this->getGame().setState(models::State::NOT_STARTED);
}

void ContinueController::doExit() {
	assert(this->getGame().getState() == models::State::ENDING);
	this->getGame().setState(models::State::EXIT);
}

}
