#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, y, z;

	do
	{
		cout << "Enter a number: ";
		cin >> x;

		if (x <= 0)
		{
			cout << "Thank you!";

		}

		z = 0;

		for (y = 0; y <= x; y++)
		{
			z += y;
		}
		cout << "The sum of all whole numbers from 1 to " << x << " is " << z << endl;

	} while (x > 0);

	return 0;
}