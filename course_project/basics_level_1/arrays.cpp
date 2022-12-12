#include <iostream>
#include <vector>

int main()
{
    double temperature_list[4] = {34.5, 27.8, 26.8, 22.0};

    std::cout << temperature_list[3] << std::endl;
    temperature_list[3] = 15.4;
    std::cout << temperature_list[3] << std::endl;
    
    std::vector<double> temperatures = {34.5, 27.8, 26.8};      //vectors are more powerful than arrays.  Why is this so? 
    std::cout << temperatures.at(0) << std::endl;               //vectors have functions that you can call using the '.' 
    temperatures.at(1) = 30.7;                                  //standard library for arrays does not include the ability to call any native functions like vectors
    std::cout << temperatures.at(1) << std::endl;
    
    std::cout << temperatures.size() << std::endl;
    temperatures.push_back(17.4);
    std::cout << temperatures.size() << std::endl;
    
    return 0;
}