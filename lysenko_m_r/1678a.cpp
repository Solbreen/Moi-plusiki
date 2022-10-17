#include <iostream>

int main()
{
    int t = 0;
    int n = 0;
    int nol1 = 0;
    int nol2 = 0;
    int dev2 = 0;
    std::cin >> t;
    for(int p = 0; p < t; p += 1){
        std::cin >> n;
        int *a = new int[n];
        for(int i = 0; i < n; i += 1){
            std::cin >> a[i];
            if(a[i] == 0){
                nol1 += 1;
            }
        }//вводим массив и выясняем есть ли в нём нули
        for(int i = 0; i < n; i += 1){
            if(a[i] !=0){
                for(int j = 0; j < n; j += 1){
                    if(i != j && a[i] != 0){
                        if(a[i] == a[j]){
                            a[i] = 0;
                            nol2 +=1;
                            dev2 +=1;
                        }
                    }
                }
            }
        }//смотрим есть ли в массиве повторяющиеся элементы. Если есть превращаем один в ноль
        if(nol1 == 0 && nol2 == 0){
            std::cout << n + 1 << std::endl;
        }
        if(nol1 != 0 && nol2 == 0)
        {
            std::cout << n - nol1 << std::endl;
        }
        if(nol1 == 0 && nol2 != 0)
        {
            std::cout << n - nol2 + dev2 << std::endl;
        }
        if(nol1 != 0 && nol2 != 0)
        {
            std::cout << n - nol1 - nol2 + dev2 << std::endl;
        }
        delete [] a;
	nol1 = 0;
	nol2 = 0;
	dev2 = 0;
    }
}