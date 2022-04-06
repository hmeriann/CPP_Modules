#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
private:
	/* data */
protected:
	std::string	type;

public:
	Dog(/* args */);
	~Dog();
};




#endif