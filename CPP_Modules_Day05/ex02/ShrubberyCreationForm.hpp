#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string	target_;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &form);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	~ShrubberyCreationForm();

	void	execute(Bureaucrat const &executor) const;

};


#endif
