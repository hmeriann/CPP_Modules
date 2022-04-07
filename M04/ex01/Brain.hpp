#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain &brain);
	Brain &operator=(const Brain &rhs);
	~Brain();

	std::string	getIdea(int ideasIndex);
	void		setIdea(std::string idea, int ideasIndex);
};

#define RESET	"\033[0m"
#define CYAN	"\033[36m"		/* Cyan */


#endif