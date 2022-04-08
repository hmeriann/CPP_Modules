#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "\n(O_o) Default Bureaucrat constructor is called" << std::endl;
	
	this->name_ = "Unknown Lowest Grade Bureaucrat";
	this->grade_ = 150;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : name_(name)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::ExceptionTooLowGrade();
		if (grade < 1)
			throw Bureaucrat::ExceptionTooHighgGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	this->name_ = bureaucrat.name_;
	this->grade_ = bureaucrat.grade_;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->grade_ = rhs.grade_;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\n(x_x) Default Bureaucrat destructor is called" << std::endl;
}

const char *Bureaucrat::ExceptionTooHighgGrade::what() const throw()
{
	return "Grade is too high. Try grade less than 150\n";
}

const char *Bureaucrat::ExceptionTooLowGrade::what() const throw()
{
	return "Grade is too low. Try grade more than 0\n";
}

std::string	Bureaucrat::getName()
{

}

unsigned int	Bureaucrat::getGrade()
{

}

void	Bureaucrat::incrementGrade()
{

}

void	Bureaucrat::decrementGrade()
{
	
}