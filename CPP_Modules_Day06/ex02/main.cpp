#include "Base.hpp"

int main()
{
	Base *rand1 = generate();

	Base &ptr1 = *rand1;

	identify(rand1);
	identify(ptr1);

	delete rand1;
	return 0;
}
