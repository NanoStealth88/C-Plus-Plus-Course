#include <iostream>

int main ()
{
    int number1; 
    int number2;
    
    std::cout << "Please enter two integer numbers: " << std::endl;
    std::cin >> number1 >> number2;

    std::cout << "The sum is " << number1 + number2 << std::endl;

    return 0;
}