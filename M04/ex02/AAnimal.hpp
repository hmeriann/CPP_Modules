#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal {
protected:
	std::string	type;

public:
	AAnimal();
	AAnimal(const AAnimal &AAnimal);
	AAnimal	&operator=(const AAnimal &rhs);
	virtual	~AAnimal();

	virtual std::string		getType() const;
	virtual void	makeSound() const = 0; // reserve the function to realize in classes
};




#endif