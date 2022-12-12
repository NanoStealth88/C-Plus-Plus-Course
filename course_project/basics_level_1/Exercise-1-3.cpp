#include <iostream>
#include <vector>
#include <numeric>

int main ()
{
    float sum = 0.0;
    float average = 0.0;
    float numberOfElements = 0.0;
    std::vector<float> float_numbers = {19.992, 3.14159, 29.39498, 12.13883};
    sum = accumulate(float_numbers.begin(), float_numbers.end(), 0.0);
    numberOfElements = float_numbers.size();

    average = sum / numberOfElements;

    std::cout << "Average is equal to: " << average << std::endl;

    return 0;
}