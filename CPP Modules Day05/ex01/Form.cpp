#include "Form.hpp"


Form::Form() : name_("Default Form"), signed_(false), gradeToSign_(50), gradeToExecute_(100)
{
	std::cout << "📄 Default Form constructor is called" << std::endl;
	std::cout << "Created \"" << this->name_ << "\"\n\t signed : \t" << this->signed_
			<< "\n\tgrade to sign :\t " << this->gradeToSign_
			<< "\n\tgrade to execute : " << this->gradeToExecute_ << std::endl;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) :
						name_(name), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute)
{
	if (gradeToSign_ < 1 || gradeToExecute_ < 1)
		throw Form::ExceptionTooHighgGrade();
	else if (gradeToSign_ > 150 || gradeToExecute_ > 150)
		throw Form::ExceptionTooLowGrade();
	signed_ = false;
}


Form::Form(const Form &form) : name_(form.getName()), gradeToSign_(getGradeToSign()),
								gradeToExecute_(getGradeToExecute()), signed_(getSigned()) {}

Form &Form::operator=(const Form &form)
{
	std::cout << "Assignation operator can't overwrite name, because it is const" << std::endl;
	return *this;
}

Form::~Form()
{
	std::cout << "📇 Destructor is called for " << this->name_ << std::endl;
}

std::string Form::getName() const { return this->name_; }

bool		Form::getSigned() { return this->signed_; }

int			Form::getGradeToSign() { return this->gradeToSign_; }

int			Form::getGradeToExecute() { return this->gradeToExecute_; }

void		Form::beSigned(Bureaucrat signer)
{
	if (this->gradeToSign_ >= signer.getGrade())
	{
		this->signed_ = true;
		std::cout << "❕❕ The form \" " << this->name_ << " \" is signed by " << signer.getName() << std::endl;
	}
	else
	{
		std::cout << signer.getName() << " couldn’t sign " << this->name_ << " because his grade : " << signer.getGrade() << std::endl;
		throw	Form::ExceptionTooLowGrade();
	}
}

const char * Form::MyException::what() const throw()
{
	return ("MyException\n");
}

const char *Form::ExceptionTooLowGrade::what() const throw()
{
	return "\n⭕️ Grade is too Low.\n";
}

const char *Form::ExceptionTooHighgGrade::what() const throw()
{
	return "\n🌋 Grade is too High.\n";
}

std::ostream &operator<<(std::ostream &out, Form curr)
{
	out << CYAN << "📃 The form \"" << curr.getName() << "\"\n\t is signed : \t" << curr.getSigned()
			<< "\n\tgrade to sign :\t " << curr.getGradeToSign()
			<< "\n\tgrade to execute : " << curr.getGradeToExecute() << RESET << std::endl;
	return out;
}
