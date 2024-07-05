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
std:: string jogador, iString, jString; 

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

    //loop para erros de inserção
    bool jogadaInvalida = true;
    while ( jogadaInvalida == true){
        std:: cout << "digite as coordenadas da linha " << jogador << ": ";
        std:: cin >> iString;
        std:: cout << "digite as coordenadas da coluna " << jogador << ": ";
        std:: cin >> jString;

        i = iString[0] - 48 ;
        j = jString [0] - 48 ;

        //ERROS:
        //fora da matriz
        if (iString.length() != 1 || jString.length() != 1){
            jogadaInvalida = true;
        }
        else if ( i > 3 || j > 3 || i < 1 || j < 1){
            jogadaInvalida = true;
        }
        else jogadaInvalida = false;

        //mensagem de erro
        if (jogadaInvalida == true){
            std:: cout << "    jogada invalida! Tente novamente..." << std:: endl;
        }
    }
    
    //após verificação, adiciona como nova jogada e converte para número
    jogadas++;
  
   for (contadorLinha = 0; contadorLinha < 3; contadorLinha++){
        for( contadorColuna = 0; contadorColuna < 3; contadorColuna++){
            if (contadorLinha + 1 == i && contadorColuna + 1 == j){
               matrizTaboleiro[contadorLinha][contadorColuna] = simbolo;
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
    if ( matrizTaboleiro[0][2] == simbolo && matrizTaboleiro[1][1] == simbolo && matrizTaboleiro[2][0] == simbolo ){
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
talvez precise de mais um while, tem q fazer pra não crachar com letras.*/



    return 0;
}