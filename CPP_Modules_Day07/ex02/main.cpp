#include "Array.hpp"

#define ARRAY_SIZE 7

int main()
{
	// empty array
	// out of range exception
	Array<int> emptyArray;
	std::cout << "Create empty array:" << std::endl;
	std::cout << "Array size = " << emptyArray.size() << std::endl;
	std::cout << std::endl;
	try {
		std::cout << "Try empty array" << std::endl;
		emptyArray[100] = 23;
	}
	catch (std::exception	const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	// sized array
	Array<int> sizeArray(ARRAY_SIZE);
	std::cout << "Create array with size ARRAY_SIZE:" << std::endl;
	std::cout << "Array size = " << sizeArray.size() << std::endl;
	std::cout << std::endl;
	std::cout << "Fill array" << std::endl;
	for (size_t i = 0; i < ARRAY_SIZE; i++) {
		sizeArray[i] = i * 2;
		std::cout << "Array[" << i << "] = " << sizeArray[i] << std::endl;
	}
	std::cout << std::endl;

	// copy array
	Array<int> copyArray(sizeArray);
	std::cout << "Create copy array with size ARRAY_SIZE:" << std::endl;
	std::cout << "Array size = " << copyArray.size() << std::endl;
	std::cout << std::endl;
	std::cout << "Copy array" << std::endl;
	for (size_t i = 0; i < ARRAY_SIZE; i++) {
		copyArray[i] = copyArray[i] * 10;
		std::cout << "Array[" << i << "] = " << copyArray[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Origin array" << std::endl;
	for (size_t i = 0; i < ARRAY_SIZE; i++) {
		std::cout << "Array[" << i << "] = " << sizeArray[i] << std::endl;
	}
	std::cout << std::endl;

	// null array exception
	std::cout << "Create null array:" << std::endl;
	try {
		Array<int> nullArray(0);
	} catch (std::exception	const &e) {
		std::cerr << e.what() << std::endl;
	}
//	delete copyArray;
	return 0;
}
