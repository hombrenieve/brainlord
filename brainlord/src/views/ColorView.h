#ifndef VIEWS_COLORVIEW_H_
#define VIEWS_COLORVIEW_H_
#include "../models/Color.h"

namespace views {

class ColorView {
public:
	ColorView(const models::Color& color);
	virtual ~ColorView() = default;
	void write();

private:
	const models::Color& color;
};

}

#endif
