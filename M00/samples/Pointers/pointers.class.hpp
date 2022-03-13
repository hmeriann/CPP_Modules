#ifndef POINTERS_CLASS_HPP
#define POINTERS_CLASS_HPP

#include <iostream>

class	Sample {

	public:

		int	foo;

		Sample( void );
		~Sample( void );

		void	bar( void ) const;

};

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

#endif
