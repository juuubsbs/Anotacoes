#include <iostream>


int Perfeito(int num1){


    int soma = 0;

    for(int i = 1; i < num1; i++){

        if(num1%i == 0){
            soma += i;
        }
    }

    if(soma == num1){
        std:: cout << "O numero eh perfeito!";
    }
    else{
        std:: cout << "O numero nao eh perfeito!";
    }
    return soma;
}

int main(){

    int num1 = 0;
    std:: cout << "Digite o numero: ";
    std:: cin >> num1;

    Perfeito(num1);

    

    return 0;
}