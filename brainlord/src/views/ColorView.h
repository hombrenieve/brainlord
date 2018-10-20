#ifndef VIEWS_COLORVIEW_H_
#define VIEWS_COLORVIEW_H_
#include <string>

#include "../models/Color.h"

namespace views {

class ColorView {
public:
	ColorView(const models::Color& color);
	ColorView();
	virtual ~ColorView() = default;
	void write();
	models::Color read();
	static std::string getColors();

private:
	models::Color color;
};

}

#endif
