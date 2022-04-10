#include <iostream>
#include <algorithm>
#include <list>

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

int main()
{
	std::list<int>	lst;

	lst.push_back(10);
	lst.push_back(23);
	lst.push_back(3);
	lst.push_back(17);
	lst.push_back(20);
	lst.push_back(1);
	lst.push_back(11);
	lst.push_back(100);

	for_each(lst.begin(), lst.end(), displayInt);
	std::find()

	return 0;
}
