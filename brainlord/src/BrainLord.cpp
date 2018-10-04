#include "BrainLord.h"
#include <iostream>

BrainLord::BrainLord() {

}

BrainLord::~BrainLord() {
}

void BrainLord::play() {
	Pattern secretCode;
	Player player(NUM_ROUNDS, Pattern::validColors);
//Initial debug
std::cout << "Secret Code: " << secretCode << std::endl;
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
}

int main() {
	BrainLord().play();
	return 0;
}
