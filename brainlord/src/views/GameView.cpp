#include "GameView.h"

#include "ProposedCombinationListView.h"
#include "SecretCombinationView.h"

#include <cassert>
#include <iostream>

namespace views {

GameView::GameView(const controllers::Controller* controller) :
	controller(controller)
{
	assert(controller != nullptr);
}

void GameView::write() {
	SecretCombinationView(controller->getGame().getSecret()).write();
	ProposedCombinationListView(controller->getGame().getProposedCombinations()).write();
}

void GameView::writeTry() {
	std::cout << "Current try: "  << controller->getGame().getTry() << " out of " <<
			models::Game::MAX_PROPOSED_COMBINATION << std::endl;
}

}
