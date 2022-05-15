#include <iostream>
#include <string>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "str's memory address :\t\t" << &str << "\n";
	std::cout << "stringPTR's memory address :\t" << &stringPTR << "\n";
	std::cout << "stringREF's memory address :\t" << &stringREF << "\n\n";

	std::cout << "str's value :\t\t" << str << "\n";
	std::cout << "stringPTR's value :\t" << stringPTR << "\n";
	std::cout << "stringREF's value :\t" << stringREF << "\n";

	return 0;
}