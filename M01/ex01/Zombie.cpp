#include "Zombie.hpp"

Zombie::Zombie()
{ }

Zombie::Zombie(std::string name)
{
	SetName(name);
}

Zombie::~Zombie()
{
	std::cout << MAGENTA << this->_name + " died \U0001F480\n" << RESET << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->_name + ": " << GREEN << "BraiiiiiiinnnzzzZ...\n" << RESET << std::endl;
}

std::string	Zombie::GetName( void ) const { return _name; }
void		Zombie::SetName(std::string name) { this->_name = name; }