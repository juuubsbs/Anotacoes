#include <iostream>

int main()
{
    int x, y;
    std:: cout << " digite a quantidade de linhas da matriz: ";
    std:: cin >> x;
    std:: cout << " digite a quantidade de colunas: ";
    std:: cin >> y;

    int matrix[x][y], i = 0, j = 0, maior = 0;

    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < y; j++)
        {
            std:: cout << " digite o valor de linha " << i + 1 << " e coluna " << j + 1 << ": ";
            std:: cin >> matrix[i][j];

            if ( matrix[i][j] > maior)
            {
                maior = matrix[i][j];
            }
        }
    }

    std:: cout << "  o maior numero digitado foi: " << maior;





    return 0;
}