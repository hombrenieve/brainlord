#include "Player.h"
#include <iostream>

Player::Player() {
	std::cout << "Wellcome to BrainLord, a simple MasterMind clone" << std::endl;
}

Player::~Player() {
	std::cout << "Bye, thanks for playing" << std::endl;
}

Pattern Player::guess() {
	std::cout << "Please, make your guess (just type the initial of your colors separated by blank):" <<std::endl;
	std::cout << "Valid colors are: ";
	for(const auto& color: Pattern::validColors) {
		std::cout << color << " ";
	}
	std::cout << std::endl;
	return Pattern();
}

void Player::win() {
}

void Player::lose() {
}



