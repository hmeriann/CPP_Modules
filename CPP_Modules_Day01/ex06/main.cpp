#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	man;

	if (argc == 2)
		man.complain(argv[1]);
	else
	{
		std::cout << "Harl takes only one of the arguments: DEBUG, INFO, WARNING, EROR" << std::endl;
		return 1;
	}
	return 0;
}
