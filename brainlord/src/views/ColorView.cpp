#include "ColorView.h"

#include <sstream>
#include "../util/IO.h"

namespace views {

ColorView::ColorView(const models::Color& color) :
	color(color)
{

}

ColorView::ColorView() :
	color(models::Color::RED)
{
}

void ColorView::write() {
	util::IO::write(color.getName());
}

models::Color ColorView::read() {
	char colorName;
	const models::Color* color = nullptr;
	do {
		colorName = util::IO::readChar();
		color = models::Color::findColor(colorName);
		if(not color) {
			util::IO::writelnError("Incorrect color: Use just the first letter!!");
		}
	}	while(not color);
	this->color = *color;
	return this->color;
}

std::string ColorView::getColors() {
	std::ostringstream colors;
	for(const auto& color: models::Color::values()) {
		colors << color.getName() << " ";
	}
	return colors.str().substr(0,colors.str().size()-1);
}

}
