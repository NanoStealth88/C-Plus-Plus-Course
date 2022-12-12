#include <iostream>

int main()
{
    std::string name;
    int age;
    
    std::cout << "What is your name? ";
    std::cin >> name;
    //std::cout << std::endl;

    std::cout << "what is your age? ";
    std::cin >> age;
    //std::cout << std::endl; 

    std::cout << "Your name is " << name << " and you're " << age << " years old." << std::endl;
    
    return 0;
}