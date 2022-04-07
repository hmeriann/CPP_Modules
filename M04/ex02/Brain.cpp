#include "Brain.hpp"

Brain::Brain()
{
	std::cout << CYAN << "\n🧠 Default Brain constructor is called" << RESET << std::endl;
	
	for (size_t i = 0; i < 100; i++)
		ideas[i] = "Idea #" + std::to_string(i);

	return;
}

Brain::Brain(const Brain &brain)
{
	std::cout << CYAN << "🧠( 🧠 ) Copy constructor is called for Brain" << RESET << std::endl;
	*this = brain;
	return;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << CYAN << "🧠 = 🧠 Assignment overload is called for Brain" << RESET << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	
	return *this;
}

Brain::~Brain()
{
	std::cout << CYAN << "❌ Destructor is called for Brain" << RESET << std::endl;
}

std::string	Brain::getIdea(int ideasIndex)
{
	if (ideasIndex >= 0 && ideasIndex < 100)
	{
		std::cout << CYAN << "Look at my idea: " << this->ideas[ideasIndex] << RESET << std::endl;
		return this->ideas[ideasIndex];
	}
	else
	{
		std::cout << CYAN << "🤷 This conception #" << ideasIndex << " is out of rage of possible ideas\n"
				<< RESET << std::endl;
		return this->ideas[ideasIndex];
	}
}

void	Brain::setIdea(std::string idea, int ideasIndex)
{
	if (ideasIndex >= 0 && ideasIndex < 100)
	{
		std::string	tmp;
		tmp = this->ideas[ideasIndex];
		this->ideas[ideasIndex] = idea;
		std::cout << CYAN << "Such a nice idea: " << RESET << this->ideas[ideasIndex] << CYAN 
				<< ", i'll set it into my brain!" << RESET << std::endl;
	}
	else
		std::cout << CYAN << "🤯🤯🤯 This conception #" << ideasIndex << " " << idea << " doesnt fit in the brain\n" 
				<< RESET << std::endl;
}
