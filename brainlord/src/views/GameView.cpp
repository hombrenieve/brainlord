#include "GameView.h"

#include "ProposedCombinationListView.h"
#include "SecretCombinationView.h"
namespace views {

GameView::GameView(controllers::Controller* controller) :
	controller(controller)
{
}

void GameView::write() {
	const controllers::Controller* ccontroller = controller;
	SecretCombinationView(ccontroller->getGame().getSecret()).write();
	ProposedCombinationListView(ccontroller->getGame().getProposedCombinations()).write();
}

}
