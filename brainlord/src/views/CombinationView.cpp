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
	for(const auto& color: combination.getCombination()) {
		ColorView(color).write();
		util::IO::write(" ");
	}
	util::IO::writeln(")");
}

}
