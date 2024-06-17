#include <iostream>

int main()
{
    int x;

    std:: cout << "Digite a quantidade de numeros que deseja obter a media: ";
    std:: cin >> x;
    int array[x];

    int i, soma = 0;
    for (i = 0; i < x; i++)
    {
        std:: cout << "Digite o valor da posicao " << i + 1;
        std:: cin >> array[i];
        soma = soma + array[i];
    }

    std:: cout << "A media dos numeros digitados eh: " << soma/x;







    return 0;
}