#include <iostream>

int main()
{
	std::cout << "Enter year: ";
	int year;
	std::cin >> year;
	
	bool leap;
	if (year%4 != 0)
		leap = false;
	else if (year%100 != 0)
		leap = true;
	else if (year%400 != 0)
		leap = false;
	else
		leap = true;
	
	if (leap)
		std::cout << "\nLeap year\n";
	else
		std::cout << "\nCommon year\n";
	
	return 0;
}
