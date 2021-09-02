#include <iostream>

int main()
{
	std::cout << "Enter the first number: ";
	int num1;
	std::cin >> num1;
	
	std::cout << "Enter the second number: ";
	int num2;
	std::cin >> num2;
	
	std::cout << "Enter the third number: ";
	int num3;
	std::cin >> num3;
	
	int smallest;
	if(num1 < num2 && num1 < num3)
		smallest = num1;
	else if(num2 < num1 && num2 < num3)
		smallest = num2;
	else
		smallest = num3;
	std::cout << "\nThe smaller of the three is " << smallest << std::endl;
	
	return 0;
}
