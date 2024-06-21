#include <iostream>
#include <string>

int main()
{
    char matrizTaboleiro[3][3]; 
    int contadorLinha, contadorColuna;

/*  ainda não tem tela inicial
    talvez colocar tempo?
    lembrar de incluir dois jogadores, logo dois modos de jogo
    precisa urgentemente começar a usar funções
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


//  inicio do jogo
int i, j;
std:: cout << "digite as coordenadas da linha: ";
std:: cin >> i;
std:: cout << "digite as coordenadas da coluna: ";
std:: cin >> j;

// início da função jogo rodando
bool jogoRodando;
do
{
    // início da função de teste de jogada valida
    bool jogadaValida;
    do
    {
        if ( i > 3 || j > 3)
        {
            jogadaValida = false;
        }

        // início da função que indica onde deve ficar o X
        else
        {
            jogadaValida = true;
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
        }
        // depois esse x pode ser substituido por simbolo pra quando tiver dois jogadores
        if ( i == j && i == 'X')
        {
            jogoRodando = false;
        }
    }
        while( jogadaValida == false);
}
    while( jogoRodando == true);






    return 0;
}