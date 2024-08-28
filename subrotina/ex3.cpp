#include <iostream>

int MDC (int &num1, int &num2){

    // para calcular precisa: 
    // 1- ordenar o maior e menor
    // 2- resultado = maior - menor
    // 3- maior = menor
    // 4- menor = resultado

    while( num1 != num2){

        // organiza o maior e o menor
        if(num2 > num1){
        int lixo = 0;

        lixo = num1;
        num1 = num2;
        num2 = lixo;
        }

        // calculo do mdc
        int resultado = num1 - num2;
        num1 = num2;
        num2 = resultado;
    }

    std:: cout << "O mdc eh: " << num1;



    return 0;
}


int main(){

    // programa que calcule o mdc (usando função)

    int num1, num2;

    std:: cout << "Digite o primeiro numero: ";
    std:: cin >> num1;

    std:: cout << "Digite o segundo numero: ";
    std:: cin >> num2;
    

    // enviar para a função
    MDC(num1, num2);







    return 0;
}