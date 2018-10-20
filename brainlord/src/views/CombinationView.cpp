#include "CombinationView.h"

#include "../util/IO.h"
#include "ColorView.h"

namespace views {

CombinationView::CombinationView(const models::Combination& combination) :
	combination(combination)
{
}

void CombinationView::write() {
	util::IO::write("( ");
	for(const auto& color: combination) {
		ColorView(color).write();
		util::IO::write(" ");
	}
	util::IO::write(")");
}

models::Combination CombinationView::read() {
	util::IO::write("Insert combination: ");
	for(auto& color: combination) {
		color = ColorView().read();
	}
	return combination;
}

}
