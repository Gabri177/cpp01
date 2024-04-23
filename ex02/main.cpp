#include <iostream>
#include <string>

int	main(void){

	std::string msg = "HI THIS IS BRAIN";
	std::string *stringPTR = &msg;
	std::string &stringPEF = msg;

	std::cout << "Memory Address of msg: " << &msg << std::endl;
	std::cout << "Memory Address of *stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory Address of &stringPEF: " << &stringPEF << std::endl;

	std::cout << "Value of msg: " << msg << std::endl;
	std::cout << "Value of *stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of &stringPEF: " << stringPEF << std::endl;

	return 0;
}