#include "BrainLord.h"
#include <iostream>

BrainLord::BrainLord() :
	player(NUM_ROUNDS, Pattern::validColors) {

}

BrainLord::~BrainLord() {
}

void BrainLord::play() {
//Initial debug
//std::cout << "Secret Code: " << secretCode << std::endl;
/////
	bool victory = false;
	for(int round = 1; round < NUM_ROUNDS and not victory; round++) {
		player.round(round);
		Pattern guess = player.guess();
		FeedBack feedBack(guess, secretCode);
		player.giveFeedBack(feedBack);
		victory = feedBack.isVictory();
	}
	if(victory) {
		player.win();
	} else {
		player.lose();
	}
std::cout << "Secret Code: " << secretCode << std::endl;
}

int main() {
	BrainLord().play();
	return 0;
}
