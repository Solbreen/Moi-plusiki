#include <iostream>

int main()
{
    int t = 0;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    std::cin >> t;
    for(int i = 0; i < t; i += 1){
        std::cin >> a1 >> a2 >> a3 >> a4;
        if(a1 == 0 && a2 == 0 && a3 == 0 && a4 == 0){
            std::cout << 0 << std::endl;
        }
        else if(a1 == 1 && a2 == 1 && a3 == 1 && a4 == 1){
            std::cout << 2 << std::endl;
        }
        else{
            std::cout << 1 << std::endl;
        }
    }
}