#include "Base.hpp"

Base	*generate(void)
{
	srand((time(0)));

	int	rand = std::rand();
	switch (rand % 3)
	{
		case 0:
		{
			std::cout << "A class object is generated" << std::endl;
			return new A;
		}
		case 1:
		{
			std::cout << "B class object is generated" << std::endl;
			return new B;
		}
		case 2:
		{
			std::cout << "C class object is generated" << std::endl;
			return new C;
		}
	}
	return NULL;
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Identified as class A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Identified as class B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Identified as class C" << std::endl;
	else
		std::cout << "Non of the classes" << std::endl;
}

void	identify(Base & p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Try A" << std::endl;
	}
	catch(std::bad_cast) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Try B" << std::endl;
	}
	catch(std::bad_cast) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Try C" << std::endl;
	}
	catch(std::bad_cast) {}
}
