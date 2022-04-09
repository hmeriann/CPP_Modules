#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <ostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
private:
	const std::string	name_;
	bool		signed_;
	const int	gradeToSign_;
	const int	gradeToExecute_;
public:
	AForm();
	AForm(const std::string name_, const int gradeToSign_, const int gradeToExecute_);
	AForm(const AForm &AForm);
	AForm &operator=(const AForm &AForm);
	virtual ~AForm();

	std::string getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;

	void			beSigned(Bureaucrat signer);
	virtual void	execute(Bureaucrat const & executor) const = 0;

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

std::ostream &operator<<(std::ostream &out, AForm &curr);

#endif
