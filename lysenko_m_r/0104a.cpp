#include <iostream>

int main()
{
    int bub[14]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};
    int tref[14]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};
    int piq[14]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 11, -30};
    int hts[14]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};
    int k = 0;
    int i = 0;
    int n = 0;
    
    std::cin >> k;
    
    k = k - 10;
    
    for ( i = 0; i < 14; i += 1)
    {
        if (k == bub[i])
        {
            n += 1;
        }
        if (k == tref[i])
        {
            n += 1;
        }
        if (k == hts[i])
        {
            n += 1;
        }
        if ( k == piq[i])
        {
            n += 1;
        }
    }
    
    std::cout << n;
}