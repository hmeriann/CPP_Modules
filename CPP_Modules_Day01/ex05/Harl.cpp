#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

/**
 * "DEBUG" level: Debug messages contain contextual information.
 * They are mostly used for problem diagnosis.
 **/
void Harl::debug( void )
{
	std::cout << BLUE << "DEBUG: " << RESET << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

/**
 * "INFO" level: These messages contain extensive information.
 * They are helpful for tracing program execution in a production environment.
 **/
void Harl::info( void )
{
	std::cout << GREEN << "INFO: " << RESET << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

/**
 * "WARNING" level: Warning messages indicate a potential issue in the system.
 * However, it can be handled or ignored.
 **/
void Harl::warning( void )
{
	std::cout << YELLOW << "WARNING: " << RESET << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

/**
 * "ERROR" level: These messages indicate an unrecoverable error has occurred.
 * This is usually a critical issue that requires manual intervention.
 **/
void Harl::error( void )
{
	std::cout << RED << "ERROR: " << RESET << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain( std::string level )
{
	int			i = 0;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*func[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	while (levels[i] != level && i < 4)
		i++;
	(this->*func[i])();
}
