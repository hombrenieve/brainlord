#ifndef COLOR_H_
#define COLOR_H_
#include <string>

class Color {
public:
	Color(const std::string& name);
	virtual ~Color();
	std::string getName() const;
private:
	std::string name;

	static std::string toUpper(const std::string& original);
};

#endif
