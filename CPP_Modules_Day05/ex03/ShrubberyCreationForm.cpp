#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Default ShrubberyCreationForm constructor is called" << std::endl;
	this->target_ = "Unknown";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target_ = target;
	std::cout << "ShrubberyCreationForm constructor is called for target -> " << this->target_ << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : AForm(form)
{
	this->target_ = form.target_;
	std::cout << "ShrubberyCreationForm copy constructor is called for target -> " << this->target_ << std::endl;

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	AForm::operator=(rhs);
	this->target_ = rhs.target_;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default ShrubberyCreationForm destructor is called" << std::endl;
}


void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() && this->getGradeToExecute() >= executor.getGrade())
	{
		std::ofstream	fout;
		std::string		newfile = this->target_ + "_shrubbery";

		fout.open(newfile.c_str());
		if (!fout.is_open())
			throw "File is not found";
		fout << "~~~~~~~~~~~~~~~" << '\n';
		fout << "~           * ~" << '\n';
		fout << "~ *   <x>     ~" << '\n';
		fout << "~      ^      ~" << '\n';
		fout << "~     ^^*     ~" << '\n';
		fout << "~    ^^^^^  * ~" << '\n';
		fout << "~   ^*^^^^^   ~" << '\n';
		fout << "~  ^^^^^^^^^  ~" << '\n';
		fout << "~ ^^^^^^^^^*^ ~" << '\n';
		fout << "~      =      ~" << '\n';
		fout << "~ **   =****  ~" << '\n';
		fout << "~*************~" << '\n';
		fout << "~~~~~~~~~~~~~~~" << '\n';
		fout.close();
		std::cout << executor.getName() << " bureaucrat is" GREEN << " executed " << RESET
				<< this->getName() << " form" << std::endl;
	}
	else if (!this->getSigned())
		std::cout << "Not signed form " << this->getName() << " cannot be executed by " << executor.getName() << std::endl;
	else
		throw ExceptionTooLowGrade();
}
