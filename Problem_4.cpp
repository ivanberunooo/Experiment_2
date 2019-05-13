#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x;

	cout << "Counting Numbers" << endl;

	for (x = 1; x < 10; x++)
	{
		cout << x << ", ";
	}

	for (x; x <= 30; x += 2)
	{
		cout << x;
		if (x != 30)
			cout << ", ";
	}

	_getch();
	return 0;

}