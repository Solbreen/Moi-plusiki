#include <iostream>
#include <array>

int main()
{
    int t = 0;
    int n = 0;
    int x = 0;
    int v = 0;
    std::cin >> t;
    
    for( int i = 0; i < t ; i += 1 )
    {
       std::cin >> n >> x;
       
       std::array<int, 500> a{0};
       std::array<int, 500> b{0};
       for ( int j = 0 ; j < n ; j += 1 )
       {
           std::cin >> a[j];
       }
       int arrsize = 500;
       for ( int k = 0 ; k < arrsize ; k += 1 ) 
       {
           if (a[k] != 0 ){
           b[a[k]-1] = a[k];}
           //std::cout << b[k] << std::endl;
       }
       
       if(b[0] != 1)
           {
               b[0] = 1;
               x = x - 1;
           }
           
       for ( int m=0 ; m < arrsize ; m += 1 ) 
       {
          if ( b[m+1] == 0 && x != 0)
          {
              b[m+1] = b[m] + 1;
              x = x - 1;
          }
          
       }
       
       for ( int y = 0; y < arrsize; y += 1 ) 
       {
           if (b[y+1] == 0)
           {
               v = b[y];
               break;
           }
       }
       
       std::cout << v << std::endl;

/*for ( int g = 0 ; g < 101; g += 1 ) 
{
    std::cout << b[g] << std::endl;}*/
    }
}