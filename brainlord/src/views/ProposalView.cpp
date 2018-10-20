#include "ProposalView.h"
#include "../util/IO.h"

#include "ColorView.h"
#include "GameView.h"

#include <cassert>

#include "CombinationView.h"
namespace views {

void ProposalView::interact(controllers::ProposalController* controller) {
	assert(controller != nullptr);
	GameView gameView(controller);
	gameView.writeTry();
	util::IO::write("Please make your guess, valid colors are ");
	util::IO::writeln(ColorView::getColors());
	controller->propose(CombinationView().read());
	if(controller->isWinner()) {
		util::IO::writeTitle("Congratulations!!, You Won!!!");
	} else if(controller->isLoser()) {
		util::IO::writeTitle("So sorry you lose the game :'-(");
	} else {
		gameView.write();
	}
}

}
