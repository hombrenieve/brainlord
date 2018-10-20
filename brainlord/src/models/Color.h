#ifndef MODELS_COLOR_H_
#define MODELS_COLOR_H_
#include <string>
#include <array>

namespace models {
class Color {
public:
	static const int NUM_COLORS = 6;
	static const Color RED;
	static const Color BLUE;
	static const Color YELLOW;
	static const Color GREEN;
	static const Color PINK;
	static const Color ORANGE;

	virtual ~Color();
	std::string getName() const;
	bool operator==(const Color& color) const;

	static const std::array<Color, NUM_COLORS>& values();
	static const Color* findColor(char initial);
private:
	std::string name;
	static const std::array<Color, NUM_COLORS> palette;
	Color(const std::string& name);
};
}

#endif
