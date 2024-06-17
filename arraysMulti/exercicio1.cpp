#include <iostream>

int main()
{
    int x, y;
    std:: cout << " digite a quantidade de linhas de sua matriz: ";
    std:: cin >> x;

    std:: cout << " digite a quantidade de colunas de sua matriz: ";
    std:: cin >> y;

    int matrix[x][y], i, j, par = 0, impar = 0;

    for( i = 0; i < x; i++)
    {
        for( j = 0; j < y; j++)
        {
            std:: cout << "digite o valor de linha " << i + 1 << " e coluna " << j + 1 << ": ";
            std:: cin >> matrix[i][j];

            if ( matrix[i][j] % 2 != 0)
            {
                impar++;
            }
            else par++;
        }
    }

    std:: cout << "A quantidade de numeros pares digitados foi: " << par << std:: endl;
    std:: cout << "A quantidade de numeros impares digitados foi: " << impar << std:: endl;

    return 0;
}

