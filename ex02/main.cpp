#include <iostream>
#include <string>

int main()
{
	std::string str("HI THIS IS BRAIN");

	std::string* stringPTR = &str;

	std::string& stringREF = str;

	std::cout << "string address : " << (void*)&str << std::endl;
	std::cout << "stringPTR address : " << (void*)stringPTR << std::endl;
	std::cout << "stringREF address : " << (void*)&stringREF << std::endl;

	std::cout << "string value : " << str << std::endl;
	std::cout << "stringPTR value : " << *stringPTR << std::endl;
	std::cout << "stringREF value : " << stringREF << std::endl;
}