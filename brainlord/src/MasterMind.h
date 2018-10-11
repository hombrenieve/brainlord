#ifndef MASTERMIND_H_
#define MASTERMIND_H_
#include "controllers/Logic.h"

class MasterMind {
public:
	void play();

private:
	controllers::Logic logic;
};

#endif
