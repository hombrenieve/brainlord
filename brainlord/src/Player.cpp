#include "Player.h"
#include <iostream>

Player::Player(int rounds, const ColorSet& colors) :
	rounds(rounds),
	colors(colors) {
	std::cout << "Wellcome to BrainLord, a simple MasterMind clone" << std::endl;
}

Player::~Player() {
	std::cout << "Bye, thanks for playing" << std::endl;
}

Pattern Player::guess() {
	std::cout << "Please, make your guess (just type the "
			<< Pattern::LENGTH << " initials of your colors separated by blank):"
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
	bool ok = false;
	std::string colorName;
	Pattern::row patternRow;
	int i = 0;
	while(not ok) {
		std::cin >> colorName;
		if(i > Pattern::LENGTH) {
			std::cerr << "More elements than expected!" << std::endl;
			break;
		}
		if(colors.isValid(colorName)) {
			patternRow[i] = colorName;
			i++;
		} else {
			std::cerr << "Incorrect color" << std::endl;
			continue;
		}
		ok = true;
	}
	//TODO check ok
	return patternRow;
}
