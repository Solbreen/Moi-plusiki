/*
Этот кусок кода написан самостоятельно
#include <iostream>
#include <array>
int main()
{
    int n = 0;
    std::array<int, 100> a{0};
    std::array<int, 100> b{0};
    std::cin >> n;
    for(int i = 0; i < n; i += 1){
        std::cin >> a[i];
    }
    for(int i = 0; i < n; i += 1){
        if(i + 1 == a[i]){
            b[i] = a[i];
        }
        else{
            b[a[i] - 1] = i + 1;
        }
    }
    for(int i = 0; i < n; i += 1){
        std::cout << b[i] << " ";
    }
}*/

/*
Этот код написан после просмотра разбора этой задачи,
я надеялся на уменьшение времени и памяти, но в итоге ничего не поменялось
#include <iostream>
#include <array>
int main()
{
    int n = 0;
    int b = 0;
    std::array<int, 100> a{0};
    std::cin >> n;
    for(int i = 0; i < n; i += 1){
        std::cin >> b;
        if(i + 1 == b){
            a[i] = b;
        }
        else{
            a[b - 1] = i + 1;
        }
    }
    for(int i = 0; i < n; i += 1){
        std::cout << a[i] << " ";
    }
}*/