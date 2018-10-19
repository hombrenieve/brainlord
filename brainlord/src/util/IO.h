#ifndef UTIL_IO_H_
#define UTIL_IO_H_
#include <iostream>


namespace util {
	namespace IO {
		void writeTitle(const std::string& title);

		void writeRule(char character);

		void writeSecret(int size);

		void write(const std::string& sentence);
		void writeln(const std::string& sentence);

		bool yesNoDialog(const std::string& title);
	}
}

#endif
