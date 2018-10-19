#ifndef VIEWS_RESULTVIEW_H_
#define VIEWS_RESULTVIEW_H_
#include "../models/Result.h"

namespace views {

class ResultView {
public:
	ResultView(const models::Result& result);
	virtual ~ResultView() = default;
	void write();

private:
	const models::Result& result;
};

}

#endif
