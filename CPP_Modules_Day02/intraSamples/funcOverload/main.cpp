#include "Sample.class.hpp"

int main()
{
	Sample	obj;
	char c = 'o';
	int n = 10;
	float z = 1.2;

	obj.bar(c);
	obj.bar(n);
	obj.bar(z);
	obj.bar(obj);
	return 0;
}
