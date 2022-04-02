#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon 		type;
	std::string	_name;
public:
	HumanA();
	~HumanA();
	
	HumanA(std::string	name, Weapon type);
	void	attack(std::string name, Weapon type);
};

HumanA::HumanA(/* args */)
{
}

HumanA::~HumanA()
{
}


#endif