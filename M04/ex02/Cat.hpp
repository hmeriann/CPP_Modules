#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
	Brain	*catsBrain;
public:
	Cat();
	Cat(const Cat &cat);
	Cat	&operator=(const Cat &rhs);
	virtual	~Cat();

	virtual void	makeSound() const; //replaces base method
	std::string		getCatsIdea(int i);
	void			setCatsIdea(std::string catsIdea, int i);
};




#endif