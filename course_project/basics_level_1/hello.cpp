#include <iostream>

int main()
{
    const int seconds_per_hour = 3600;              //has to be initialized in the same declarative statement
    const double max_allowed_temperature = 76.8;    //has to be initialized when declared

    int user_age = 34;
    double temperature = 20.6;
    bool is_alive = false;
    std::string user_name = "Bob";
    
    std::cout << user_age << std::endl;
    std::cout << temperature << std::endl;
    std::cout << is_alive << std::endl;
    std::cout << user_name << std::endl;
    return 0;
} 