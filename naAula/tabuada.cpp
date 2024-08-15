#include <iostream>

int main(){

    //algoritmos que dá output da tabuada sem salvar nenhum valor

    int numLinha = 1, numColuna = 1;

    while(numLinha < 10){
        std:: cout <<  "\t" << numLinha  ;
        numLinha++;
    }
    std:: cout << "\n\n";


    for ( int i = 1; i < 10; i++){
        std:: cout << i << "\t";
        for ( int j = 1; j < 10; j++){
            std:: cout <<  i*j << "\t";
        }
        std:: cout << "\n\n";
    }










    return 0 ;
}