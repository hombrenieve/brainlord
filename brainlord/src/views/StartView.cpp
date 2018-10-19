#include "StartView.h"
#include "../util/IO.h"
#include "GameView.h"

namespace views {
void StartView::interact(controllers::StartController* controller) {
	controller->start();
	util::IO::writeTitle("Wellcome to MasterMind");
	GameView(controller).write();
}

}
