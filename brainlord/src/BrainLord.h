#ifndef BRAINLORD_H_
#define BRAINLORD_H_
#include "Pattern.h"
#include "Player.h"

class BrainLord {
	static const int NUM_ROUNDS = 10;
public:
	BrainLord();
	virtual ~BrainLord();
	void play();
private:
	Pattern secretCode;
	Player player;
};

#endif
