#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int oddy;
	
	cout << "Enter integer: ";
	cin >> oddy;
	
	if (oddy % 2 == 0)
	cout << "The integer is even: ";
	if (oddy % 2 == 1)
	cout << "The integer is odd: ";
	
	return 0;
	system("PAUSE");
	return 'EXIT_SUCCESS';
}
