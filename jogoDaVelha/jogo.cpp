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
    for (contadorLinha = 0; contadorLinha < 3; contadorLinha++){
        for( contadorColuna = 0; contadorColuna < 3; contadorColuna++){
            matrizTaboleiro[contadorLinha][contadorColuna] = {'-'};
            std:: cout << matrizTaboleiro[contadorLinha][contadorColuna] << " ";
        }
        std:: cout << "\n";
    }


//inicio do jogo
int i, j, jogadas = 0;
char simbolo; 
std:: string jogador; 

//início da função jogo rodando, vira false somente quando o jogador vence
bool jogoRodando = true;
do{
    //troca de jogadores
    if ( jogadas % 2 == 0){
        jogador = "jogador 1";
        simbolo = 'X';
    }
    else{
        jogador = "jogador 2"; 
        simbolo = 'O';
    }

    std:: cout << "digite as coordenadas da linha " << jogador << ": ";
    std:: cin >> i;
    std:: cout << "digite as coordenadas da coluna " << jogador << ": ";
    std:: cin >> j;

    jogadas++;

    //ERROS 
  
   for (contadorLinha = 0; contadorLinha < 3; contadorLinha++){
        for( contadorColuna = 0; contadorColuna < 3; contadorColuna++){
            if (contadorLinha + 1 == i && contadorColuna + 1 == j){
               matrizTaboleiro[contadorLinha][contadorColuna] = {simbolo};
               std:: cout << matrizTaboleiro[contadorLinha][contadorColuna] << " ";
            }
            else{
                std:: cout << matrizTaboleiro[contadorLinha][contadorColuna] << " ";
            }  
        }
        std:: cout << "\n";
    }
  

    //CONDIÇÕES PARA GANHAR:
    //diagonal principal
    if ( matrizTaboleiro[0][0] == simbolo && matrizTaboleiro[1][1] == simbolo && matrizTaboleiro[2][2] == simbolo ){
        jogoRodando = false;
    }
    //diagonal secundária
    else if ( matrizTaboleiro[0][2] == simbolo && matrizTaboleiro[1][1] == simbolo && matrizTaboleiro[2][0] == simbolo ){
            jogoRodando = false;
    }
    //linhas iguais ou colunas iguais
    for ( int linha = 0, coluna = 0; linha <= 3; linha ++, coluna++){
            if ( matrizTaboleiro [linha][0] == simbolo && matrizTaboleiro [linha][1] == simbolo && matrizTaboleiro [linha][2] == simbolo ){
                jogoRodando = false;
            }
            if ( matrizTaboleiro [0][coluna] == simbolo && matrizTaboleiro [1][coluna] == simbolo && matrizTaboleiro [2][coluna] == simbolo){
                jogoRodando = false;  
            }
    }
}
while( jogoRodando == true);

std:: cout << "Voce venceu, " << jogador << "!" << std::endl;
std:: cout << "O numero total de jogadas foi: " << jogadas;


/* não tem página inicial nem modos de jogo nem nada ainda, porém até agora ele funciona,
não terminei a linha de erros, parei iniciando o teste de linha ou coluna maior que a matriz,
talvez precise de mais um while.*/



    return 0;
}