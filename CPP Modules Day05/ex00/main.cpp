#include "Bureaucrat.hpp"

int	main()
{
	std::cout << GREEN << "\n\t*START TEST 1: Trying to promote too much*" << RESET << std::endl;
	try
	{
		Bureaucrat	Boss("Boss", 1);

		std::cout << Boss << std::endl; // Boss, bureaucrat grade 1.

		Boss.incrementGrade();
		std::cout << Boss << std::endl;

		Boss.incrementGrade();
		std::cout << Boss << std::endl;
	}
	catch (std::exception const &ExceptionTooHighgGrade)
	{
		std::cerr << ExceptionTooHighgGrade.what() << "\nNowhere to go higher!" << std::endl;
	}

	std::cout << GREEN << "\n\t*START TEST 2: Calling constructor with too High grade*" << RESET << std::endl;
	try
	{
		Bureaucrat	ExBoss("ExBoss", -21);

		std::cout << ExBoss << std::endl;
	}
	catch (std::exception const &ExceptionTooHighgGrade)
	{
		std::cerr << ExceptionTooHighgGrade.what() << "\nThere are no such grades." << std::endl;
	}

	std::cout << GREEN << "\n\t*START TEST 3: Trying to change grade to too much low*" << RESET << std::endl;
	try
	{
		Bureaucrat	Staff("Staff", 148);

		std::cout << Staff << std::endl; // Staff, bureaucrat grade 148.

		Staff.decrementGrade();
		Staff.decrementGrade();
		Staff.decrementGrade();
		std::cout << Staff << std::endl;
	}
	catch (std::exception const &ExceptionTooLowGrade)
	{
		std::cerr << ExceptionTooLowGrade.what() << "\nImpossible to change the grade." << std::endl;
	}

	std::cout << "\t\t*THE END*" << std::endl;
	return 0;
}
