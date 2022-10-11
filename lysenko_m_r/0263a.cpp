#include <iostream>
#include <string>

int main()
{
    int a = 0;
    int c = 0;
    int i = 0;
    int j = 0;
    int mat[5][5];
    for ( i = 0; i < 5; i += 1)
    {
        for ( j = 0; j < 5; j += 1)
        {
            std::cin >> a;
            mat[i][j] = a;
        }
    }
    
    if (mat[2][2] != 0 )
    {
        c = 0;
    }
    else 
    {
        for ( i = 0; i < 5; i += 1)
        {
            if ( mat[i][0] != 0 || mat[i][4] != 0)
            {
                c += 2;
            }
            else if ( mat[i][1] != 0 || mat[i][3] != 0 ) 
            {
                c += 1;
            }
            if ( mat[0][i] != 0 || mat[4][i] != 0)
            {
                c += 2;
            }
            else if ( mat[1][i] != 0 || mat[3][i] != 0 )
            {
                c += 1;
            }
        }
    }
    std::cout << c;
}