#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	std::string	name_;
	unsigned int		grade_;
public:
	Bureaucrat();
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat	&operator=(const Bureaucrat &rhs);
	virtual	~Bureaucrat();

	class	ExceptionTooHighgGrade: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class	ExceptionTooLowGrade: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	std::string		getName();
	unsigned int	getGrade(); //Remember. Since grade 1 is the highest one and 150 the lowest, incrementing a grade 3 should give a grade 2 to the bureaucrat

	void	incrementGrade(); // If the grade is out of range, both of them will throw the same exceptions as the constructor.
	void	decrementGrade();

};

std::ostream &operator<<(std::ostream &out, Bureaucrat curr); // You will implement an overload of the insertion («) operator to print something like (without the angle brackets): <name>, bureaucrat grade <grade>.

#define RESET	"\033[0m"
#define CYAN	"\033[36m"		/* Cyan */

#endif
