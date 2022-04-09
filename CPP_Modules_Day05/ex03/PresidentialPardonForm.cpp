#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "Default PresidentialPardonForm constructor is called" << std::endl;
	this->target_ = "Unknown";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target_ = target;
	std::cout << "PresidentialPardonForm constructor is called for target -> " << this->target_ << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : AForm(form)
{
	this->target_ = form.target_;
	std::cout << "PresidentialPardonForm copy constructor is called for target -> " << this->target_ << std::endl;

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	AForm::operator=(rhs);
	this->target_ = rhs.target_;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default PresidentialPardonForm destructor is called" << std::endl;
}


void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() && this->getGradeToExecute() >= executor.getGrade())
		std::cout << this->target_ << " was pardoned by ZAPHOD BEEBLBROX!" << std::endl;
	else if (!this->getSigned())
	{
		std::cout << "Not signed form " << this->getName() << " cannot be executed by " << executor.getName() << std::endl;
		throw ExceptionPardoningFailed();
	}
	else
		throw ExceptionTooLowGrade();
}

//EXEPTIONS
const char * PresidentialPardonForm::MyException::what() const throw()
{
	return ("MyException\n");
}

const char *PresidentialPardonForm::ExceptionPardoningFailed::what() const throw()
{
	return "\n🛑 TAKE A CLEAN FORM AND GET ALL THE PROPER SIGNATURES!!!\n";
}

const char *PresidentialPardonForm::ExceptionTooLowGrade::what() const throw()
{
	return "\n⭕️ TOO LOW GRADE TO PARDONING ON BEHALF OF THE ZAPHOD BEEBLBROX.\n";
}
