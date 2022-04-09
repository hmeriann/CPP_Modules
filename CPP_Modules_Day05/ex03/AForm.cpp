#include "AForm.hpp"


AForm::AForm() : name_("Default AForm"), signed_(false), gradeToSign_(150), gradeToExecute_(1)
{
	std::cout << "📄 Default AForm constructor is called" << std::endl;
	std::cout << "Created \"" << this->name_ << "\" signed : " << this->signed_
			<< "\tgrade to sign :\t " << this->gradeToSign_
			<< "\tgrade to execute : " << this->gradeToExecute_ << std::endl;
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute) :
						name_(name), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute)
{
	if (gradeToSign_ < 1 || gradeToExecute_ < 1)
		throw AForm::ExceptionTooHighgGrade();
	else if (gradeToSign_ > 150 || gradeToExecute_ > 150)
		throw AForm::ExceptionTooLowGrade();
	signed_ = false;

	std::cout << "📜 AForm constructor is called" << std::endl;
	std::cout << "Created AForm \"" << this->name_ << "\" signed : " << this->signed_
			<< "\tgrade to sign : " << this->gradeToSign_
			<< "\tgrade to execute : " << this->gradeToExecute_ << std::endl;
}


AForm::AForm(const AForm &AForm) : name_(AForm.getName()), gradeToSign_(getGradeToSign()),
								gradeToExecute_(getGradeToExecute()), signed_(getSigned()) {}

AForm &AForm::operator=(const AForm &AForm)
{
	std::cout << "Assignation operator can't overwrite name, because it is const" << std::endl;
	return *this;
}

AForm::~AForm()
{
	std::cout << "📇 Destructor is called for " << this->name_ << std::endl;
}

std::string AForm::getName() const { return this->name_; }
bool		AForm::getSigned() const { return this->signed_; }
int			AForm::getGradeToSign() const { return this->gradeToSign_; }
int			AForm::getGradeToExecute() const { return this->gradeToExecute_; }

void		AForm::beSigned(Bureaucrat signer)
{
	std::cout << CYAN << signer.getName() << " is tying to sign 📝 " << this->name_ << " AForm..." << RESET << std::endl;
	if (this->gradeToSign_ >= signer.getGrade())
	{
		this->signed_ = true;
		std::cout << "❕❕ The AForm \" " << this->name_ << " \" is " << GREEN << "signed" << RESET << " by " << signer.getName() << std::endl;
	}
	else
	{
		std::cout << signer.getName() << " couldn’t sign " << this->name_ << " because his grade : " << signer.getGrade() << std::endl;
		throw	AForm::ExceptionTooLowGrade();
	}
}

//EXEPTIONS
const char * AForm::MyException::what() const throw()
{
	return ("MyException\n");
}

const char *AForm::ExceptionTooLowGrade::what() const throw()
{
	return "\n⭕️ Grade is too Low.\n";
}

const char *AForm::ExceptionTooHighgGrade::what() const throw()
{
	return "\n🌋 Grade is too High.\n";
}


//OPERATOR OVERLOAD
std::ostream &operator<<(std::ostream &out, AForm &curr)
{
	out << CYAN << "\"<<\" operator overloaded:\n📃 The AForm \"" << curr.getName() << "\" is signed : " << curr.getSigned()
			<< "\tgrade to sign : " << curr.getGradeToSign()
			<< "\tgrade to execute : " << curr.getGradeToExecute() << RESET << std::endl;
	return out;
}
