#include <iostream>
#include <string>

int main()
{
    long long n = 0;
    long long k = 0;
    long long a =  -10000000006;
    long long u = 0;
    long long p = 0;
    long long l = 0;
    long long i = 0;
    std::cin >> n >> k;
    long long *f = new long long [n];
    long long *t = new long long [n];
    long long *ud = new long long [n];
    for ( i = 0; i < n; i += 1)
    {
        std::cin >> p >> l;
        f[i] = p;
        t[i] = l;
    }
    
    
    
    for ( i = 0; i < n; i += 1)
    {
        if ( t[i] > k )
        {
            u = f[i] - ( t[i] - k);
            ud[i] = u;
        }
        else
        {
            ud[i] = f[i];
        }
    }
    
    for ( i = 0; i < n; i += 1)
    {
        if ( ud[i] > a )
        {
            a = ud[i];
        }
    }
    
        std::cout << a;
        
}