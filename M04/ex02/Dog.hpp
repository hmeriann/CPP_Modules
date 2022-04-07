#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
	Brain	*dogsBrain;
public:
	Dog();
	Dog(const Dog &dog);
	Dog	&operator=(const Dog &rhs);
	virtual	~Dog();

	virtual void	makeSound() const;
	std::string		getDogsIdea(int i);
	void			setDogsIdea(std::string catsIdea, int i);
};




#endif