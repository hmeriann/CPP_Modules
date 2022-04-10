#include "Pair.class.tpp"

int main()
{
	Pair<bool, bool>	v1(true, false);
	Pair<int, std::string>	v2(12, std::string ("alkjhflkdshlkgh"));

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return 0;
}
