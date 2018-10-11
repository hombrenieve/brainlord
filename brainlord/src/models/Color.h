#ifndef MODELS_COLOR_H_
#define MODELS_COLOR_H_
#include <string>
#include <array>

namespace models {
class Color {
public:
	static const int NUM_COLORS = 6;

	virtual ~Color();
	std::string getName() const;
	void print() const;
	bool operator==(const Color& color) const;

	static const std::array<Color, NUM_COLORS>& values();
	static const Color* findColor(std::string substr);
	static const Color& read();
private:
	std::string name;
	static const std::array<Color, NUM_COLORS> palette;
	Color(const std::string& name);

	static std::string toUpper(const std::string& original);
};
}

#endif
