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

int Controller::getTry() {
	return this->getGame().getTry();
}

void Controller::nextTry() {
	this->getGame().nextTry();
}

bool Controller::isWinner() {
	return this->getGame().isWinner();
}

void Controller::readGuess() {
	this->getGame().readGuess();
}

std::string Controller::getColors() {
	return this->getGame().getColors();
}

void Controller::calculateResult() {
	this->getGame().calculateResult();
}

void Controller::write() {
	this->getGame().write();
}

}
