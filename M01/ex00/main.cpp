#include "Zombie.hpp"

int	main()
{
	Zombie	stackZombieStan = Zombie("Stan");
	stackZombieStan.announce();
	Zombie	stackZombieWill = Zombie("Will");
	stackZombieWill.announce();
	
	Zombie	*dinamicZombie = newZombie("Din");
	dinamicZombie->announce();
	delete dinamicZombie;

	randomChump("Kiki");

	return 0;
}

