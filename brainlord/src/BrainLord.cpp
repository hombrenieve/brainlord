#include "BrainLord.h"
#include <iostream>

BrainLord::BrainLord() {

}

BrainLord::~BrainLord() {
}

void BrainLord::play() {
	bool victory = false;
	for(int round = 1; round < NUM_ROUNDS and not victory; round++) {
		Pattern guess = player.guess();
		FeedBack feedBack = secretCode.check(guess);
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
