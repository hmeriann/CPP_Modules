#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	/* data */
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat	&operator=(const Bureaucrat &rhs);

	Bureaucrat	&operator<<(const Bureaucrat &rhs); // You will implement an overload of the insertion («) operator to print something like (without the angle brackets): <name>, bureaucrat grade <grade>.
	// Bureaucrat(/* args */);
	virtual	~Bureaucrat();

	std::string	getName();
	int			getGrade(); //Remember. Since grade 1 is the highest one and 150 the lowest, incrementing a grade 3 should give a grade 2 to the bureaucrat

	int			setIncrementGrade(); // If the grade is out of range, both of them will throw the same exceptions as the constructor.
	int			setDecrementGrade();

};



#endif
