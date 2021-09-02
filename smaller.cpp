#include <iostream>

int main()
{
	std::cout << "Enter the first number: ";
	int num1;
	std::cin >> num1;
	
	std::cout << "Enter the second number: ";
	int num2;
	std::cin >> num2;
	
	int smaller;
	if(num1 < num2)
		smaller = num1;
	else
		smaller = num2;
	
	std::cout << "\nThe smaller of the two is " << smaller << std::endl;
	return 0;
}
