#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &wrongcat);
	WrongCat	&operator=(const WrongCat &rhs);
	virtual	~WrongCat();

	// std::string	getType();
	virtual void		makeSound() const; //replaces base method
};




#endif