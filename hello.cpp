#include <iostream>

int main()
{
	int number1;
	
	std::cout << "Enter first integer: ";
	std::cin >> number1;
	
	int number2;
	int sum;
	
	std::cout << "Enter second integer: ";
	std::cin >> number2;
	
	sum = number1 + number2;
	std::cout << "sum is " << sum << std:: endl;
}