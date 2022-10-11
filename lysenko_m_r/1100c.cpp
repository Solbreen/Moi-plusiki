#include <iostream>
#include <cmath>
#include <numbers>
 
int main()
{
    long double n = 0;
    long double r = 0;
    long double R = 0;
    std::cin >> n >> r;
    
    R = (r * std::sin(std::numbers::pi_v<long double> / n))/(1 - std::sin(std::numbers::pi_v<long double> / n));
    std::cout.precision(12);
    std::cout << R;
 
}