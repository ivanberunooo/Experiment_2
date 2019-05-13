#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, a, b, c;
	a = 0;
	b = 1;

	cout << a << ", " << b << ", ";

	for (x = 1; x <= 20; x++)
	{
		c = a;
		cout << a + b;
		a = b;
		b += c;
		if (x != 20)
			cout << ", ";
	}

	_getch();
	return 0;

}