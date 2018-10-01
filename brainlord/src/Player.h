#ifndef PLAYER_H_
#define PLAYER_H_
#include "FeedBack.h"
#include "Pattern.h"

class Player {
public:
	Player(int rounds, const ColorSet& colors);
	virtual ~Player();
	Pattern guess();
	void giveFeedBack(const FeedBack& feedBack);
	void round(int round);
	void win();
	void lose();
private:
	int rounds;
	const ColorSet& colors;

	Pattern readPattern();

};

#endif
