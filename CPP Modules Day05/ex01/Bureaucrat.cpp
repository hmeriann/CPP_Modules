#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "(O_o) Default Bureaucrat constructor is called" << std::endl;

	this->name_ = "Unknown Lowest Grade Bureaucrat";
	this->grade_ = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name)
{
	if (grade > 150)
		throw Bureaucrat::ExceptionTooLowGrade();
	else if (grade < 1)
		throw Bureaucrat::ExceptionTooHighgGrade();
	else
		this->grade_ = grade;
	std::cout << "(o_O) Bureaucrat constructor is called for " << this->name_
			<< " with grade " << this->grade_ << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	this->name_ = bureaucrat.name_;
	this->grade_ = bureaucrat.grade_;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Assignation operator can't overwrite name, because it is const" << std::endl;
	this->grade_ = rhs.grade_;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\n(x_x) Default Bureaucrat destructor is called for " << this->name_ << std::endl;
}

const char *Bureaucrat::MyException::what() const throw()
{
	return ("MyException\n");
}

const char *Bureaucrat::ExceptionTooHighgGrade::what() const throw()
{
	return "\nGrade is too high. Try grade more than 0\n";
}

const char *Bureaucrat::ExceptionTooLowGrade::what() const throw()
{
	return "\nGrade is too low. Try grade less than 150\n";
}

std::string	Bureaucrat::getName()
{
	return this->name_;
}

int	Bureaucrat::getGrade()
{
	return this->grade_;
}

void	Bureaucrat::incrementGrade()
{
	if (this->grade_ - 1 < 0)
		throw Bureaucrat::ExceptionTooHighgGrade();
	else
	{
		this->grade_--;
		std::cout << YELLOW << "\n($_$) Bureaucrat " << this->name_ << " was promoted to grade "
			<< this->grade_ << RESET << std::endl;
	}
}

void	Bureaucrat::decrementGrade()
{
	if (this->grade_ + 1 > 150)
		throw Bureaucrat::ExceptionTooLowGrade();
	else
	{
		this->grade_++;
		std::cout << MAGENTA << "\n(>_<) Bureaucrat " << this->name_ << " was downgraded to grade "
			<< this->grade_ << RESET << std::endl;
	}
}

void	Bureaucrat::signForm(Form &form)
{
	if (this->getGrade() <= form.getGradeToSign()) // signers grade should be upper (means less) than required by the form
	{
		form.beSigned(*this);
		std::cout << CYAN << this->name_ << "signed" << form.getName() << RESET << std::endl;
	}
	else
	{

		std::cout << CYAN << Bureaucrat::name_ << "couldn't sign " << form.getName()
					<< " because of grade " << this->grade_ << " is too low" << RESET << std::endl;
	}
}

// You will implement an overload of the insertion («) operator to print something like (without the angle brackets): <name>, bureaucrat grade <grade>.
std::ostream &operator<<(std::ostream &out, Bureaucrat curr)
{
	out << CYAN << curr.getName() << ", bureaucrat grade " << curr.getGrade() << "." << RESET << std::endl;
	return out;
}
