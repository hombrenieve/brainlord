#include "MasterMind.h"
#include "controllers/Controller.h"

void MasterMind::play() {
	controllers::Controller* controller = nullptr;
	do {
		controller = logic.getController();
		if(controller != nullptr) {
			controller->control();
		}
	} while(controller != nullptr);
}

int main() {
	MasterMind().play();
	return 0;
}
