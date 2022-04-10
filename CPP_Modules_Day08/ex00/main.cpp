#include "Start.hpp"

int	foo(int x)
{
	std::cout << "string " << x << std::endl;
	return x;
}

int	main()
{
	int	a = 21;
	int	b = 42;


	std::cout << "Swap A " << a << " and B " << b;
	::swap( a, b );
	std::cout <<  ". Result : A " << a << " and B " << b << std::endl;

	std::cout << "Min of " << a << " and " << b << " is "
			<< ::min<int>( a, b ) << std::endl;
	std::cout << "Min of " << a << " and " << b << " is "
			<< ::min( a, b ) << std::endl;

	std::cout << "Max of " << a << " and " << b << " is "
			<< ::max<int>( a, b ) << std::endl;
	std::cout << "Max of " << a << " and " << b << " is "
			<< ::max( a, b ) << std::endl;

	int	ret = ::max<int>( foo(a), foo(b) );
	std::cout << "Max of " << a << " and " << b << " is "
			<< ::max<int>( a, b ) << std::endl;

	std::cout << "Min of " << a << " and " << b << " is "
			<< ::min<int>( a, b ) << std::endl;

	std::cout << "Swap A " << a << " and B " << b;
	::swap( a, b );
	std::cout <<  ". Result : A " << a << " and B " << b << std::endl;


	return 0;
}
