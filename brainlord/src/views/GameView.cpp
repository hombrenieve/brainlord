#include "GameView.h"

#include "ProposedCombinationListView.h"
#include "SecretCombinationView.h"

#include <cassert>

#include "../util/IO.h"


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
	util::IO::write("Current try: ", controller->getGame().getTry());
	util::IO::writeln(" out of ", models::Game::MAX_PROPOSED_COMBINATION);
}

}
