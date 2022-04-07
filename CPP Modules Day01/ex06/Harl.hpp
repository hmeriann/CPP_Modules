#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl();
		~Harl();

		void complain( std::string level );
};

#define RESET	"\033[0m"
#define BLACK	"\033[30m"		/* Black */
#define RED		"\033[31m"		/* Red */
#define GREEN	"\033[32m"		/* Green */
#define YELLOW	"\033[33m"		/* Yellow */
#define BLUE	"\033[34m"		/* Blue */
#define MAGENTA	"\033[35m"		/* Magenta */
#define CYAN	"\033[36m"		/* Cyan */
#define WHITE	"\033[37m"		/* White */
#define BOLDWHITE	"\033[1m\033[37m"	/* Bold White */
#endif
