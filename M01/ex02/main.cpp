#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN"; //original
	std::string	*stringPTR = &str; // pointer to string's address
	std::string	&stringREF = str; // reference to string

	std::cout << "\nADDRESSES:\n" << std::endl;
	std::cout << "&str\t\t" << &str << "\n" << std::endl;
	std::cout << "stringPTR\t" << stringPTR << "\n" << std::endl;
	std::cout << "stringREF\t" << &stringREF << "\n\n" << std::endl;
	
	std::cout << "VALUES:\n" << std::endl;
	std::cout << "str\t\t" << str << "\n" << std::endl;
	std::cout << "stringPTR\t" << *stringPTR << "\n" << std::endl;
	std::cout << "stringREF\t" << stringREF << "\n" << std::endl;
	return 0;
}