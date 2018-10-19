#include "ResultView.h"
#include <iostream>

namespace views {

ResultView::ResultView(const models::Result& result) :
	result(result)
{
}

void ResultView::write() {
	std::cout << "Blacks: " << result.getRightlyPositionedCounter() << " "
			<< "Whites: " << result.getRightlyColoredCounter();

}

}
