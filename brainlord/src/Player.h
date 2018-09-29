/*
 * Player.h
 *
 *  Created on: Sep 29, 2018
 *      Author: ediapab
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include "Pattern.h"

class Player {
public:
	Player();
	virtual ~Player();
	Pattern guess();
	void win();
	void lose();
};

#endif /* PLAYER_H_ */
