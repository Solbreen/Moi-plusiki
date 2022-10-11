#include <iostream>
#include <string>

int main()
{
    
        int x = 0;
        int s1 = 0;
        int s2 = 0;
        int s3 = 0;
        int s4 = 0;
        std::cin >> x;
        int *numbers = new int[x];
        
        for ( int i = 0; i < x; i += 1)
        {
            std::cin >> numbers[i];
        }
        
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
       
        for (int i = 0; i < x; i += 1)
        {
           if (numbers[i] < 10)
           {
               std::cout << 1 << std::endl;
               std::cout << numbers[i] << std::endl;
           }
           else if ( numbers[i] >= 10 && numbers[i] < 100)
           { 
               if ( numbers[i] % 10 == 0)
               {
                   std::cout << 1 << std::endl;
                   std::cout << numbers[i] << std::endl;
               }
               else
               {
                   s4 = numbers[i] % 10;
                   s3 = numbers[i] - s4;
                   std::cout << 2 << std::endl;
                   std::cout << s3 << " " << s4 << std::endl;
               }
           }
           else if ( numbers[i] >= 100 && numbers[i] < 1000)
           {
               if ( numbers[i] % 100 == 0)
               {
                   std::cout << 1 << std::endl;
                   std::cout << numbers[i] << std::endl;
               }
               else
               {
                   s2 = (numbers[i]/100)*100;
                   s3 = ((numbers[i] - s2)/10)*10;
                   s4 = numbers[i] % 10;
                   int d = numbers[i] - s2;
                   if ( d % 10 == 0)
                   {
                       std::cout << 2 << std::endl;
                       std::cout << s2 << " " << s3 << std::endl;
                   }
                   else if (s3 == 0)
                   {
                       std::cout << 2 << std::endl;
                       std::cout << s2 << " " << s4 << std::endl;
                   }
                   else
                   {
                       std::cout << 3 << std::endl;
                       std::cout << s2 << " " << s3 << " " << s4 << std::endl;
                   }
               }
           }
           else if ( numbers[i] >= 1000 && numbers[i] < 10000 )
           {
               if ( numbers[i] % 1000 == 0 )
               {
                   std::cout << 1 << std::endl;
                   std::cout << numbers[i] << std::endl;
               }
               else
               {
                   s1 = (numbers[i]/1000)*1000;
                   s2 = ((numbers[i] - s1)/100)*100;
                   s3 = ((numbers[i] - s1 -s2)/10)*10;
                   s4 = numbers[i] % 10;
                   if (s2 != 0 && s3 == 0 && s4 == 0)
                   {
                       std::cout << 2 << std::endl;
                       std::cout << s1 << " " << s2 << std::endl;
                   }
                   else if ( s2 != 0 && s3 != 0 && s4 ==0 )
                   {
                       std::cout << 3 << std::endl;
                       std::cout << s1 << " " << s2 << " " << s3 << std::endl;
                   }
                   else if ( s2 == 0 && s3 != 0 && s4 != 0)
                   {
                       std::cout << 3 << std::endl;
                       std::cout << s1 << " " << s3 << " " << s4 << std::endl;
                   }
                   else if ( s2 != 0 && s3 == 0 && s4 != 0 )
                   {
                       std::cout << 3 << std::endl;
                       std::cout << s1 << " " << s2 << " " << s4 << std::endl;
                   }
                   else if ( s2 == 0 && s3 == 0 && s4 != 0)
                   {
                       std::cout << 2 << std::endl;
                       std::cout << s1 << " " << s4 << std::endl;
                   }
                   else if ( s2 == 0 && s3 != 0 && s4 == 0 )
                   {
                       std::cout << 2 << std::endl;
                       std::cout << s1 << " " << s3 << std::endl;
                   }
                   else 
                   {
                       std::cout << 4 << std::endl;
                       std::cout << s1 << " " << s2 << " " << s3 << " " << s4 << std::endl;
                   }
               }
           }
               
               
            else if ( numbers[i] == 10000)
            {
                std::cout << 1 << std::endl;
                std::cout << numbers[i] << std::endl;
            }
        }
    delete [] numbers;
}