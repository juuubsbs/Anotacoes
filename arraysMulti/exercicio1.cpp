#include <iostream>

int main()
{
    int x, y;
    std:: cout << " digite a quantidade de linhas de sua matriz: ";
    std:: cin >> x;

    std:: cout << " digite a quantidade de colunas de sua matriz: ";
    std:: cin >> y;

    int matrix[x][y], i, j, par, impar;

    for( i = 0; i < x; i++)
    {
        for( j = 0; j < y; j++)
        {
            if ( matrix[i][j] % 2 != 0)
            {
                impar++;
            }
            else par++;
        }
    }

    return 0;
}

