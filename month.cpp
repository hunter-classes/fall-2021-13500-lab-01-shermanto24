#include <iostream>

int main()
{
	std::cout << "Enter year: ";
	int year;
	std::cin >> year;
	
	std::cout << "Enter month: ";
	int month;
	std::cin >> month;
	
	bool leap;
	if (year%4 != 0)
		leap = false;
	else if (year%100 != 0)
		leap = true;
	else if (year%400 != 0)
		leap = false;
	else
		leap = true;
	
	int days;
	if (month == 2)
	{
		if (leap)
			days = 29;
		else
			days = 28;
	}
	else if (month < 8) //january-july
	{
		if (month%2 != 0) //odd months
			days = 31;
		else //even months
			days = 30;
	}
	else //august-december
	{
		if (month%2 == 0) //even months
			days = 31;
		else //odd months
			days = 30;
	}
	std::cout << days << " days" << std::endl;
		
	return 0;
}
