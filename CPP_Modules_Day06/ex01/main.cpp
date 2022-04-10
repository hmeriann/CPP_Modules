/**
 * Сериализация — это преобразование объекта или дерева объектов в какой-либо формат с тем, чтобы потом эти объекты можно было восстановить из этого формата.
 **/

#include "Reint.hpp"

int	main()
{
	Data	one;

	one.dataInt = 90;
	one.dataString = "Day06";

	std::cout << "ONE : address: \t\t" << &one << std::endl;

	Data	*two = deserialize(serialize(&one));

	std::cout << "TWO : address: \t\t" << two << std::endl;
	std::cout << "TWO : &address:\t\t" << &two << '\n' << std::endl;

	std::cout << "ONE : number: " << one.dataInt << "\tstring: " << one.dataString << std::endl;
	std::cout << "TWO : number: " << two->dataInt << "\tstring: " << two->dataString  << std::endl;

	return 0;
}
