#include <iostream>

/*
** Write function wich otputs inputed text uppercase
*/

int main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (argv[i])
		{
			while (argv[i][j])
			{
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << "" << std::endl;
	}
	return 0;
}
