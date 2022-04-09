#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string	target_;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &form);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();

	void	execute(Bureaucrat const &executor) const;

	class MyException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class	ExceptionPardoningFailed: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class	ExceptionTooLowGrade: public std::exception {
		public:
			virtual const char *what() const throw();
	};

};


#endif
