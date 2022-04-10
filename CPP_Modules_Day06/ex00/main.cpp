#include "TypeCast.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please pass only ONE argument to the function." << std::endl;
		return 1;
	}
	TypeCast	arg(argv[1]);

	arg.to_char();
	arg.to_int();
	arg.to_double();
	arg.to_float();

	return 0;
}
