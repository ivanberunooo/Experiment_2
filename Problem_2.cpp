#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	float WaterBill, Previous, Current, Unpaid;

	cout << "Current meter reading (in gallons): ";
	cin >> Current;
	
	cout << "Previous meter reading (in gallons): ";
	cin >> Previous;
	
	cout << "Unpaid Balance: ";
	cin >> Unpaid;

	if (Unpaid > 0)
		WaterBill = 35.00 + ((Current - Previous) * 1.10) + Unpaid + 20.00;
	else
		WaterBill = 35.00 + ((Current - Previous) * 1.10);

	cout << "Total Amount: Php " << fixed << setprecision(2) << WaterBill;

	_getch();
	return 0;
}