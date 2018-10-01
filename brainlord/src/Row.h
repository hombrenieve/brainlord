#ifndef ROW_H_
#define ROW_H_

#include <vector>

class Row {
public:
	using color = char;
	static const int LENGTH = 4;
	Row();
	color& operator[](int i);
	const color& operator[](int i) const;
	int countElements(color c) const;
	virtual ~Row();

private:
	using storage = std::vector<color>;
	storage elements;
};

#endif
