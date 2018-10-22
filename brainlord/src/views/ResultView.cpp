#include "ResultView.h"

#include "../util/IO.h"

namespace views {

ResultView::ResultView(const models::Result& result) :
	result(result)
{
}

void ResultView::write() {
	util::IO::write("Blacks: ", result.getRightlyPositionedCounter());
	util::IO::write(" Whites: ", result.getRightlyColoredCounter());

}

}
