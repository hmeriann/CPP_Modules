#include "ClapTrap.hpp"

int main()
{
	ClapTrap	user("SubZero");
	ClapTrap	looser;

	user.attack("Sonya");
	user.takeDamage(2);
	user.beRepaired(1);
	return 0;
}
