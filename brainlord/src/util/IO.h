#ifndef UTIL_IO_H_
#define UTIL_IO_H_
#include <iostream>


namespace util {
	class IO {
	public:
		static void writeTitle(const std::string& title);

		static void writeRule(char character);

		static void writeSecret(int size);

		static void write(const std::string& sentence);
		static void write(const std::string& sentence, int data);
		static void writeln(const std::string& sentence);
		static void writeln(const std::string& sentence, int data);
		static void writeError(const std::string& sentence);
		static void writelnError(const std::string& sentence);

		static bool yesNoDialog(const std::string& title);
		static char readChar();
	private:
		static const int RULE_WIDTH=40;
		static const std::string NEW_LINE;

		static void write(std::ostream& output, const std::string& sentence);
	};
}

#endif
