#include <iostream>
#include <array>


int main()
{
    int n = 0;
    int k = 0;
    int per = 0;
    int const sarr = 100;
    int i = 0;
    std::cin >> n >> k;
    std::array<int, sarr> a{0};
    for(i = 0; i < n; i += 1)
    {
        std::cin >> a[i];
    }
    
    for(i = 0; i < n; i += 1)
    {
        if( k % a[i] == 0 && a[i] > per)
        {
            per = a[i];
        }
    }
    std::cout << k / per;
}