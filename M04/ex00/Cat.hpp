#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
private:
	/* data */
protected:
	std::string	type;

public:
	Cat(/* args */);
	~Cat();
};




#endif