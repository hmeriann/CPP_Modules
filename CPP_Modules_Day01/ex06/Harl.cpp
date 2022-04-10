#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

/**
 * "DEBUG" level: Debug messages contain contextual information.
 * They are mostly used for problem diagnosis.
 **/
void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

/**
 * "INFO" level: These messages contain extensive information.
 * They are helpful for tracing program execution in a production environment.
 **/
void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

/**
 * "WARNING" level: Warning messages indicate a potential issue in the system.
 * However, it can be handled or ignored.
 **/
void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

/**
 * "ERROR" level: These messages indicate an unrecoverable error has occurred.
 * This is usually a critical issue that requires manual intervention.
 **/
void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain( std::string level )
{
	int			i = 0;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*func[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	while (levels[i] != level && i < 4)
		i++;
	switch (i)
	{
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
			break;
		case 0:
			std::cout << BLUE << "[ " + levels[0] + " ]" << RESET << std::endl;
			(this->*func[0])();
		case 1:
			std::cout << GREEN << "[ " + levels[1] + " ]" << RESET << std::endl;
			(this->*func[1])();
		case 2:
			std::cout << YELLOW << "[ " + levels[2] + " ]" << RESET << std::endl;
			(this->*func[2])();
		case 3:
			std::cout << RED << "[ " + levels[3] + " ]" << RESET << std::endl;
			(this->*func[3])();
	}
}
