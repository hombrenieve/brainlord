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
	std::string colorName;
	const models::Color* color = nullptr;
	do {
		std::cin >> colorName;
		color = models::Color::findColor(colorName[0]);
		if(not color) {
			std::cerr << "Incorrect color: Use just the first letter!!" << std::endl;
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
