#include <iostream>
#include <array>

int main()
{
    int t = 0;
    int n = 0;
    int y1 = 0;
    int y2 = 0;
    std::array<int, 100> a{2};
    
    std::cin >> t;
    for(int p = 0; p < t; p += 1){
        std::cin >> n;
        for(int i = 0; i < n; i += 1){
            std::cin >> a[i];
        } //заполнили массив
        for(int i = 0; i < n; i += 1){
            if(i + 1 != n){
                if(a[i+1] == 0){
                    y1 = i;
                    break;
                }
            }
            else if(i + 1 == n){
                y1 = n;
                break;
            }
        } // проходимся слева направо в поиске первого нуля
        
        for(int i = n - 1; i > -1; i -= 1){
            if(i != 0){
                if(a[i - 1] == 0){
                    y2 = i;
                    break;
                }
            }
            else if(i == 0){
                y2 = 1;
                break;
            }
        } // проходимся справа налево в поиске первого нуля
        
        if(y1 == n && y2 == 1){
            std::cout << 0 << std::endl;
        }
        else{
            std::cout << y2 - y1 << std::endl;
        }
        for(int i = 0; i < 100; i += 1){
            a[i] = 2;
        }
    }
}