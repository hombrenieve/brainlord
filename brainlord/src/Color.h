#ifndef COLOR_H_
#define COLOR_H_
#include <string>
#include <array>

class Color {
public:
	static const int NUM_COLORS = 6;
	static Color RED;
	static Color BLUE;
	static Color YELLOW;
	static Color GREEN;
	static Color PINK;
	static Color ORANGE;

	virtual ~Color();
	std::string getName() const;
	void print() const;
	bool operator==(const Color& color) const;

	static std::array<Color, NUM_COLORS> values();
	static Color* findColor(std::string substr);
	static Color read();
private:
	std::string name;
	Color(const std::string& name);

	static std::string toUpper(const std::string& original);
};

#endif
