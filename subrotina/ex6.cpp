#include <iostream>


int Amigos(int num1, int num2){


    int soma1 = 0, soma2 = 0;

    for(int i = 1; i < num1; i++){

        if(num1%i == 0){
            soma1 += i;
        }
    }

    for(int i = 1; i < num2; i++){

        if(num2%i == 0){
            soma2 += i;
        }
    }

    if(soma1 == num2){
        if(soma2 == num1){
            std:: cout << "Os numeros sao amigos!";
        }
        else{
            std:: cout << "Os numeros nao sao amigos!";
        }
    }
    else{
        std:: cout << "Os numeros nao sao amigos!";
    }
    return 0;
}

int main(){

    int num1 = 0, num2 = 0;
    std:: cout << "Digite o primeiro numero: ";
    std:: cin >> num1;
    std:: cout << "Digite o segundo numero: ";
    std:: cin >> num2;

    Amigos(num1, num2);

    

    return 0;
}