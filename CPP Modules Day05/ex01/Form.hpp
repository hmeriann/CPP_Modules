#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
private:
	const std::string	name_;
	bool		signed_;
	const int	gradeToSign_;
	const int	gradeToExecute_;
public:
	Form();
	Form(const std::string name_, const int gradeToSign_, const int gradeToExecute_);
	Form(const Form &form);
	Form &operator=(const Form &form);
	~Form();

	std::string getName() const;
	bool		getSigned();
	int			getGradeToSign();
	int			getGradeToExecute();

	void		beSigned(Bureaucrat signer);

	class MyException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class	ExceptionTooHighgGrade: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class	ExceptionTooLowGrade: public std::exception {
		public:
			virtual const char *what() const throw();
	};

};

std::ostream &operator<<(std::ostream &out, Form curr);

#endif
