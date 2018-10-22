#include "ContinueView.h"

#include <cassert>

#include "../util/IO.h"

namespace views {

void ContinueView::interact(controllers::ContinueController* controller) {
	assert(controller != nullptr);
	if(util::IO::yesNoDialog("Do you want to play again?")) {
		controller->doContinue();
	} else {
		util::IO::writeTitle("Bye bye!");
		controller->doExit();
	}
}

}
