#include <iostream>
 
int main()
{
    int x = 0;
    std::cin >> x ;
    int i = 0;
    while (x != 0){
    if ( x >= 5 )
    {
      x -= 5;
      i += 1;
    }
    else 
    {
      x = 0;
      i += 1;
    }
}
std::cout << i;
        
}