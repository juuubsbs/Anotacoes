#include <iostream>

int main()
{
    int x;
    std:: cout << "Digite a quantidade de numeros para a checagem: ";
    std:: cin >> x;

    int array[x], i, positivo=0, negativo=0;    
    for( i = 0; i < x; i++)
    {
        std:: cout << "Digite o valor de posicao " << i + 1 << " : ";
        std:: cin >> array[i];
        if (array[i] < 0)
        {
            negativo++;
        }
        else positivo++;

    }

    std:: cout << "a quantidade de numeros positivos eh: " << positivo << std:: endl;
    std:: cout << "a quantidade de numeros negativos eh: " << negativo << std:: endl;





    return 0;
}