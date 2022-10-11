#include <iostream>
#include <cmath>
#include <numbers>

int main()
{
    int x = 0;
    int fact = 1;
    int f = 0;
    double p = 0;
    double s = 0;
    double y = 0;
    double a = 0;
    double b = 1;
    double sigma = 0.1;
    double eps = 0.0001;
    
    
    std::cout << "x" << "      |  " << "s(x)" << "      |  " << "f(x)" << std::endl;
    for ( ; a < b + 0.01; a += sigma )
    {  
        y = pow( std::numbers::e , 2 * a );
        
        for (unsigned long i = 0; i < 4294967295; i += 1)
        {
            f = i;
            if ( i != 1 && i != 0 )
            {
                while ( f != 1 )
                {
                    fact = f * fact;
                    f = f - 1;
                }
            }
            else
            {
                fact = 1;
            }
            
            p = pow( 2 * a , i ) / fact;
            
            if ( abs(p) < eps )
            {
                break;
            }
            else 
            {
                s = s + p;
            }
        }
        
        std::cout << std::fixed;
        std::cout.precision(6);
        
        if (a < 0.005)
        {
            x = 0;
            std::cout << x << "      |  " << s << "  |  " << y << std::endl;
        }
        else if ( a > 0.006 && a < (b - 0.01) )
        {
            std::cout.precision(1);
            std::cout << a;
            std::cout.precision(6);
            std::cout << "    |  " << s << "  |  " << y << std::endl;
        }
        else 
        {
            x = 1;
            std::cout << x << "      |  " << s << "  |  " << y << std::endl;
        }
        s = 0;
    }
}