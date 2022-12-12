#include <iostream>

int main ()
{
    int number1; 
    int number2;
    
    std::cout << "Please enter two integer numbers: " << std::endl;
    std::cout << "Enter the first number: ";
    std::cin >> number1;
    std::cout << "Enter the second number: ";
    std::cin >> number2;
    int sum = number1 + number2;
    std::cout << "The sum of " << number1 << " and " << number2 << " is " << sum << std::endl;

    return 0;
}