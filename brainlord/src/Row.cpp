#include "Row.h"
#include <algorithm>

Row::Row() :
	elements(LENGTH, '#') {
}

Row::color& Row::operator [](int i) {
	return elements[i];
}

const Row::color& Row::operator [](int i) const {
	return elements[i];
}

int Row::countElements(color c) const {
	return std::count(elements.begin(), elements.end(), c);
}

Row::~Row() {
}

