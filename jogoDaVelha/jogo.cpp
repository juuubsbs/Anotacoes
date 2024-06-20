#include <iostream>
#include <string>

int main()
{
    char matrizTaboleiro[3][3]; 
    int contadorLinha, contadorColuna;

/*  ainda não tem tela inicial
    talvez colocar tempo?
    lembrar de incluir dois jogadores, logo dois modos de jogo
*/ 

//  função de criação da tabela.
    for (contadorLinha = 0; contadorLinha < 3; contadorLinha++)
    {
        for( contadorColuna = 0; contadorColuna < 3; contadorColuna++)
        {
            matrizTaboleiro[contadorLinha][contadorColuna] = {'-'};
            std:: cout << matrizTaboleiro[contadorLinha][contadorColuna] << " ";
        }
        std:: cout << "\n";
    }

// inicio do jogo
    int i, j;
    std:: cout << "digite as coordenadas da linha: ";
    std:: cin >> i;
    std:: cout << "digite as coordenadas da coluna: ";
    std:: cin >> j;

    for (contadorLinha = 0; contadorLinha < 3; contadorLinha++)
    {
        for( contadorColuna = 0; contadorColuna < 3; contadorColuna++)
        {
            if (contadorLinha == i - 1)
            {
                if (contadorColuna == j - 1)
                {
                    matrizTaboleiro[contadorLinha][contadorColuna] = {'X'};
                    std:: cout << matrizTaboleiro[contadorLinha][contadorColuna] << " ";
                }
                else
                {
                    matrizTaboleiro[contadorLinha][contadorColuna] = {'-'};
                    std:: cout << matrizTaboleiro[contadorLinha][contadorColuna] << " ";
                }
            }
            else
            {
                matrizTaboleiro[contadorLinha][contadorColuna] = {'-'};
                std:: cout << matrizTaboleiro[contadorLinha][contadorColuna] << " ";
            }
            
        }
        std:: cout << "\n";
    }
    






    return 0;
}