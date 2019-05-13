#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	char Package;
	double Hours;
	float TotalBalance;

	cout << "Package Purchased: ";
	cin >> Package;
	cout << "No. of Hours Consumed: ";
	cin >> Hours;

	switch (Package)
	{
	case 'A':
	case 'a':
		if (Hours <= 10)
			cout << "TotalBalance = Php 995.00";
		else
			TotalBalance = (995 + ((Hours - 10) * 20));
		break;

	case 'B':
	case 'b':
		if (Hours <= 20)
			cout << "TotalBalance = Php 1,495.00";
		else
			TotalBalance = (1495 + ((Hours - 20) * 10));
		break;

	case 'C':
	case 'c':
		cout << "TotalBalance = Php 1,995.00";
		break;

		cout << "TotalBalance = Php"  << fixed << setprecision(2) << TotalBalance;
	}

	return 0;
}