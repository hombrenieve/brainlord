#include "ColorView.h"

#include "../util/IO.h"
namespace views {

ColorView::ColorView(const models::Color& color) :
	color(color)
{

}

void ColorView::write() {
	util::IO::write(color.getName());
}

}
