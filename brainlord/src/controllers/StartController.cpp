#include "StartController.h"
#include <cassert>
#include <iostream>

namespace controllers {

StartController::StartController(models::Game& game) :
	Controller(game)
{ }

StartController::~StartController() {
}



void StartController::control() {
	assert(this->getGame().getState() == models::State::NOT_STARTED);
	std::cout << "Wellcome to MasterMind" << std::endl << std::endl;
	this->getGame().write();
	this->getGame().setState(models::State::PLAYING);
}

void StartController::accept(ControllerVisitor* visitor) {
	visitor->visit(this);
}

}
