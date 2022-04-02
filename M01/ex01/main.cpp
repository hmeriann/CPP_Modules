#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(3, "Horde");
	for (int i = 0; i < 3; i++)
		horde->announce();
	
	delete [] horde;

	Zombie	*morde = zombieHorde(1, "Morde");
	morde->announce();

	Zombie	*borde = zombieHorde(2, "Borde");
	for (int i = 0; i < 2; i++)
		borde->announce();
	
	delete [] morde;
	delete [] borde;
	return 0;
}