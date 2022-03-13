#include "pointers.class.hpp"

int	main() {

	Sample	instance;
	Sample	*instancep = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)( void ) const;

	p = &Sample::foo;

	std::cout << YELLOW << "Value of member foo : " << instance.foo << RESET << std::endl;
	instance.*p = 21;
	std::cout << MAGENTA << "Value of member foo : " << instance.foo << RESET << std::endl;
	instancep->*p = 42;
	std::cout << CYAN << "Value of member foo : " << instance.foo << RESET << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	return 0;
}
