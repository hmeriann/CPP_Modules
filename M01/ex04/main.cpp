#include <iostream>
#include <string>
#include <fstream>

void	ft_replace(char *filename, char *s1, char *s2);

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	std::string	newFile;

	if (argc == 4 && argv[1] && argv[2] && argv[3])
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];

	}
	else
		std::cout << "Please pass three parameters in the following order: a filename and two strings, s1 and s2." << std::endl;
	return 0;
}

void	ft_replace(char *filename, char *s1, char *s2)
{
	std::fstream	fs;
	//open the file <filename>
	fs.open(filename, )
	//copy its content into a new file <filename>.replace, replacing every occurrence of s1 with s2.
}
