#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "Default RobotomyRequestForm constructor is called" << std::endl;
	this->target_ = "Unknown";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target_ = target;
	std::cout << "RobotomyRequestForm constructor is called for target -> " << this->target_ << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : AForm(form)
{
	this->target_ = form.target_;
	std::cout << "RobotomyRequestForm copy constructor is called for target -> " << this->target_ << std::endl;

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	AForm::operator=(rhs);
	this->target_ = rhs.target_;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default RobotomyRequestForm destructor is called" << std::endl;
}


void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() && this->getGradeToExecute() >= executor.getGrade())
	{
		std::cout << "Bureaucrat " << executor.getName() << "🗯 makes some drilling noises on the form 📉 named " << this->getName() << std::endl;
		std::cout << this->target_ << " has been 🤖 robotomized successfully 50\% of the time!" << std::endl;
	}
	else if (!this->getSigned())
	{
		std::cout << "Not signed form " << this->getName() << " cannot be executed by " << executor.getName() << std::endl;
		throw ExceptionRobotomyFailed();
	}
	else
		throw ExceptionTooLowGrade();
}

//EXEPTIONS
const char * RobotomyRequestForm::MyException::what() const throw()
{
	return ("MyException\n");
}

const char *RobotomyRequestForm::ExceptionRobotomyFailed::what() const throw()
{
	return "\n🛑 ROBOTOMY IS FAILED\n";
}

const char *RobotomyRequestForm::ExceptionTooLowGrade::what() const throw()
{
	return "\n⭕️ TOO LOW GRADE TO EXECUTE ROBOTOMY.\n";
}
