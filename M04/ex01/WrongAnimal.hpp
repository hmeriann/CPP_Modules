#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string	type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &animal);
	WrongAnimal	&operator=(const WrongAnimal &rhs);
	virtual	~WrongAnimal();

	std::string		getType() const;
	virtual void	makeSound() const;
};




#endif