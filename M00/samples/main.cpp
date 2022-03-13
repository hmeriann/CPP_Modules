// #include "sample.class.hpp"

//for Sample
// int	main(void) {
// 	Sample	instance;

// 	instance.publicFoo = 42;
// 	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
// 	// instance.publicFoo = 42;
// 	// std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;

// 	instance.publicBar();
// 	// instance._privateBar();

// 	return 0;
// }


#include "sample2.class.hpp"
//for Sample2
int	main(void) {
	Sample	instance;

	instance.setFoo( 42 );
	std::cout << "instance.getFoo(42): " << instance.getFoo() << std::endl;
	instance.setFoo( -42 );
	std::cout << "instance.getFoo(-42): " << instance.getFoo() << std::endl;

	return 0;
}
