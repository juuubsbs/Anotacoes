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
int i, j, jogador = 1, simbolo;

// início da função jogo rodando, vira false somente quando o jogador vence
bool jogoRodando = true;
do
{
    std:: cout << "digite as coordenadas da linha: ";
    std:: cin >> i;
    std:: cout << "digite as coordenadas da coluna: ";
    std:: cin >> j;
  
   for (contadorLinha = 0; contadorLinha < 3; contadorLinha++)
    {
        for( contadorColuna = 0; contadorColuna < 3; contadorColuna++)
        {
            if (contadorLinha + 1 == i && contadorColuna + 1 == j)
            {
               matrizTaboleiro[contadorLinha][contadorColuna] = {'X'};
               std:: cout << matrizTaboleiro[contadorLinha][contadorColuna] << " ";
            }
            else
            {
                std:: cout << matrizTaboleiro[contadorLinha][contadorColuna] << " ";
            }  
        }
        std:: cout << "\n";
    }
    
    // condições para o jogador ganhar, diagonal principal
    if (matrizTaboleiro[0][0] == 'X' &&  matrizTaboleiro[1][1] == 'X' && matrizTaboleiro[2][2] == 'X')
    {
        std:: cout << "Voce venceu";
        jogoRodando = false;
    }
}
while( jogoRodando == true);






    return 0;
}