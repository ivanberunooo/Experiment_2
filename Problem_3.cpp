#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	float v;
	int x, y;
	const float z = 2.5;

	cout << "x: ";
	cin >> x;
	
	cout << "y: ";
	cin >> y;

	switch (x)
	{
	case 1:
		if (y > 1 && y < 5)
			v = x * y * z;
		else if (y >= 5)
			v = x + (y / z);
		else
			v = x + y + z;
		break;
	
	case 2:
		if (y <= 5)
			v = abs((x - y) / z);
		else
			v = x - sqrt(y + z);
		break;
	default:
		v = x + y + z;
		break;
	}

	cout << "V = " << fixed << setw(10) << setprecision(2) << v;

	_getch();
	return 0;

}