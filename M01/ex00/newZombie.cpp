#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie	*dinamicZombie;

	dinamicZombie = new Zombie(name);
	return (dinamicZombie);
}
