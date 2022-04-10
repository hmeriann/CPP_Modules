#ifndef AMATERIA_HPP
# define AMATERIA

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
	std::string	type;
public:
	AMateria(std::string const & type);
	AMateria &operator=(const AMateria &rhs);
	virtual ~AMateria();


	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
private:
	AMateria();
};

#endif