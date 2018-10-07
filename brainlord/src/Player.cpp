#include "Player.h"
#include <iostream>

Player::Player(int rounds, const ColorSet& colors) :
	rounds(rounds),
	colors(colors) {
	std::cout << "Welcome to BrainLord, a simple MasterMind clone" << std::endl;
}

Player::~Player() {
	std::cout << "Bye, thanks for playing" << std::endl;
}

Pattern Player::guess() {
	std::cout << "Please, make your guess:"
			<< std::endl << "Valid colors are: ";
	for(const auto& color: colors.getPalette()) {
		std::cout << color.getName() << " ";
	}
	std::cout << std::endl;
	return readPattern();
}

void Player::win() {
	std::cout << "You win!!!!!" << std::endl;
}

void Player::lose() {
	std::cout << "Sorry, you have lost the game!" << std::endl;
}

void Player::giveFeedBack(const FeedBack& feedBack) {
	std::cout << "Black pegs: " << feedBack.getRightlyPositionedCounter() << std::endl
			<< "White pegs: " << feedBack.getRightlyColoredCounter() << std::endl;
}

void Player::round(int round) {
	std::cout << "Starting round " << round << " out of " << rounds << std::endl;
}

Pattern Player::readPattern() {
	std::string colorName;
	Pattern::row patternRow;
	int i = 0;
	while(i < Pattern::LENGTH) {
		std::cin >> colorName;
		if(colors.isValid(colorName)) {
			patternRow.emplace_back(colorName);
			i++;
			if(i > 0) {
				std::cout << Pattern::LENGTH-i << " more to go!" << std::endl;
			}
		} else {
			std::cerr << "Incorrect color" << std::endl;
			continue;
		}
	}
	Pattern pattern(patternRow);
	std::cout << "You are trying with: " << pattern << std::endl;
	return pattern;
}
