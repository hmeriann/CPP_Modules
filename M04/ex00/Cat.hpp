#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &cat);
	Cat	&operator=(const Cat &rhs);
	virtual	~Cat();

	// std::string	getType();
	virtual void		makeSound() const; //replaces base method
};




#endif