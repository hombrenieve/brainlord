#include "Player.h"
#include "Row.h"
#include <iostream>
#include <cctype>

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
			<< Row::LENGTH << " initials of your colors separated by blank):"
			<< std::endl << "Valid colors are: ";
	for(const auto& color: colors) {
		std::cout << color << " ";
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
	std::string line;
	Row pattern;
	int i = 0;
	while(not ok and std::getline(std::cin, line)) {
		if(i > Row::LENGTH) {
			std::cerr << "More elements than expected!" << std::endl;
			break;
		}
		for(char character: line) {
			if(character != ' ' and character != '\n') {
				if(Pattern::isValid(toupper(character))) {
					pattern[i] = toupper(character);
					i++;
				} else {
					std::cerr << "Incorrect character: " << character << std::endl;
					continue;
				}
			}
		}
		ok = true;
	}
	//TODO check ok
	return pattern;
}
