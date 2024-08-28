#include <iostream>


// receba um valor inteiro e verifica se o valor é positivo ou negativo

int Positivo (int numero){

    int positivo = 0;
    if (numero % 2 == 0){
         positivo = 1;
    }

    return positivo;
}


int main(){ 

    int numero;
    std:: cout << "Caso o numero for positivo retornara 1, caso nao, retornara 0. \n";
    std:: cout << "Digite o valor: ";
    std:: cin >> numero;

    Positivo (numero);

    std:: cout << "O resultado foi: " << Positivo;





    return 0;
}