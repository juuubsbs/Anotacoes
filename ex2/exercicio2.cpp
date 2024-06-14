#include <iostream>

int main()
{
    int x;

    std:: cout << "Digite a quantidade de valores que deseja somar: ";
    std:: cin >> x;

    int array[x], i;
    for(i = 0; i < x; i++)
    {
        std:: cout << "Digite o valor de posicao " << i + 1 << " : ";
        std:: cin >> array[i];
    }
    i = 0;

    int soma = 0;
    for(i = 0; i < x; i++)
    {
        soma = soma + array[i];
    }

    std:: cout << "A soma dos algarismos eh: " << soma;





    return 0;
}