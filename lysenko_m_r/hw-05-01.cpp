#include <iostream>
#include <cmath>


int main()
{
    int x = 0;
    double s = 0;
    double p = 0;
    double f = 0;
    double fact = 1;
    double y = 0;
    double a = -1;
    double b = 1;
    double sigma = 0.1;
    double eps = 0.001;
    
    
    std::cout << "x" << "     |  " << "s(x)" << "      |  " << "f(x)" << std::endl;
    for ( ; a <= b; a += sigma )
    {
        y = cos(a);
        for (unsigned long i = 0; i < 4294967295; i += 1)
        {
            f = 2 * i;
            if ( f != 0 && f != 1 )
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
            
            p = pow(-1, i) * ( pow(a, 2 * i) / fact );
            
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
        
        if (a < 0.05 && a > -0.1)
        {
            x = 0;
            std::cout << x << "     |  " << s << "  |  " << y << std::endl;
        }
        else if ( a > 0.95 ) 
        {
            x = 1;
            std::cout << x << "     |  " << s << "  |  " << y << std::endl;
        }
        else if (a < -0.99)
        {   
            x = -1;
            std::cout << x << "    |  " << s << "  |  " << y << std::endl;
        }
        else if ( a > 0.0 && a < 1.0 )
        {
            std::cout.precision(1);
            std::cout << a;
            std::cout.precision(6);
            std::cout << "   |  " << s << "  |  " << y << std::endl;
        }
        else
        {
            std::cout.precision(1);
            std::cout << a;
            std::cout.precision(6);
            std::cout << "  |  " << s << "  |  " << y << std::endl;
        }
        s = 0;
    }
}