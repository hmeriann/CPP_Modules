#include "sample.class.hpp"

int	main(void) {
	Sample	instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
	// instance.publicFoo = 42;
	// std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;

	instance.publicBar();
	// instance._privateBar();

	return 0;
}
