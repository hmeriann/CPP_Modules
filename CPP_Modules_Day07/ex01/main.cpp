#include "Iter.hpp"

int main(void)
{
	std::string arr = "Hello";
	// double arr[] = {1.5, 5.1, 10.2, 0, 4.0, 7.3};
	int len = arr.length();

	iter(arr.c_str(), len, printUpper);
	// iter(arr, len, printPlusTen);

	return 0;
}
