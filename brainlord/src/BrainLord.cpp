/*
 * BrainLord.cpp
 *
 *  Created on: Sep 29, 2018
 *      Author: ediapab
 */

#include "BrainLord.h"
#include <iostream>

BrainLord::BrainLord() {
	// TODO Auto-generated constructor stub

}

BrainLord::~BrainLord() {
	// TODO Auto-generated destructor stub
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
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	return 0;
}
