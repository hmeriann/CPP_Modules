#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class	AForm;

class	Bureaucrat
{
private:
	std::string	name_;
	int			grade_;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat	&operator=(const Bureaucrat &rhs);
	virtual	~Bureaucrat();

	class MyException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class	ExceptionTooHighgGrade: public Bureaucrat::MyException {
		public:
			virtual const char *what() const throw();
	};

	class	ExceptionTooLowGrade: public Bureaucrat::MyException {
		public:
			virtual const char *what() const throw();
	};

	std::string	getName() const;
	int			getGrade() const;

	void		incrementGrade();
	void		decrementGrade();

	void		signAForm(AForm &AForm);
	void		executeAForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat curr);

#define RESET	"\033[0m"
#define BLACK	"\033[30m"		/* Black */
#define RED		"\033[31m"		/* Red */
#define GREEN	"\033[32m"		/* Green */
#define YELLOW	"\033[33m"		/* Yellow */
#define BLUE	"\033[34m"		/* Blue */
#define MAGENTA	"\033[35m"		/* Magenta */
#define CYAN	"\033[36m"		/* Cyan */
#define WHITE	"\033[37m"		/* White */

#endif
