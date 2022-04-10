#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

void	ft_replace(std::string filename, std::string s1, std::string s2, std::ifstream &original, std::ofstream &replaced);
void	exit_error(std::string filename, std::ifstream &original, std::ofstream &replaced);

int	main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		s2;

	//check args
	if (argc == 4 && argv[1] && argv[2] && argv[3])
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		std::ifstream	original(filename); //try to open file foe read
		std::ofstream	replaced(filename + ".replace");

		//copy its content into a new file <filename>.replace, replacing every occurrence of s1 with s2.
		if (original.is_open() && replaced.is_open())
			ft_replace(filename, s1, s2, original, replaced);
		else
			exit_error(filename, original, replaced);
		original.close();
		replaced.close();
	}
	else
		std::cout << "Please pass three parameters in the following order: a filename and two strings, s1 and s2." << std::endl;
	return 0;
}

void	exit_error(std::string filename, std::ifstream &original, std::ofstream &replaced)
{
	if (!original)
	{
		std::cout << "Cannot open the file " + filename << std::endl;
		exit (1);
	}
	if (!replaced)
	{
		std::cout << "Cannot open the file " + filename + ".replace" << std::endl;
		exit (1);
	}
}

void	ft_replace(std::string filename, std::string s1, std::string s2, std::ifstream &original, std::ofstream &replaced)
{
	std::string	tmp = "";
	std::size_t	i = 0;

	while (!original.eof())
	{
		std::getline(original, tmp);
		while ((i = tmp.find(s1, i)) != std::string::npos)
		{
			tmp.erase(i, s1.length());
			tmp.insert(i, s2);
		}
		replaced << tmp;
		replaced << std::endl;
	}
}

/**
 * 		std::string::c_str
 * Get C string equivalent
 * Returns a pointer to an array that contains a null-terminated sequence of characters (i.e., a C-string)
 * representing the current value of the string object.
 * This array includes the same sequence of characters that make up the value of the string object plus an
 * additional terminating null-character ('\0') at the end.
**/

/**
 * 		std::string::npos
 * Maximum value for size_t
 * npos is a static member constant value with the greatest possible value for an element of type size_t.
 * This value, when used as the value for a len (or sublen) parameter in string's member functions, means
 * "until the end of the string".
 * As a return value, it is usually used to indicate no matches.
 * This constant is defined with a value of -1, which because size_t is an unsigned integral type, it is the
 * largest possible representable value for this type.
 **/
