#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <fstream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string	target_;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &form);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	~RobotomyRequestForm();

	void	execute(Bureaucrat const &executor) const;

	class MyException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class	ExceptionRobotomyFailed: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class	ExceptionTooLowGrade: public std::exception {
		public:
			virtual const char *what() const throw();
	};

};


#endif
