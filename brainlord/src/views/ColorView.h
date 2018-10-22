#ifndef VIEWS_COLORVIEW_H_
#define VIEWS_COLORVIEW_H_
#include <string>

#include "../models/Color.h"

namespace views {

class ColorView {
public:

	static std::string getColors();

	ColorView(const models::Color& color);
	ColorView();
	virtual ~ColorView() = default;

	void write();
	models::Color read();

private:
	models::Color color;
};

}

#endif
