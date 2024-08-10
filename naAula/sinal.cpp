#include <iostream>
#include <string>
#include <locale.h>

int main(){

    std:: setlocale(LC_ALL, "pt_BR.UTF-8");
    int valor; 

    std:: cout << "Digite o valor inteiro: ";
    std:: cin >> valor;

    if(valor > 0){
        std:: cout << "Seu valor é positivo!";
    }
    else if(valor < 0){
        std:: cout << "Seu valor é negativo!";
    }
    else std:: cout << "Seu valor é zero";

    return 0;
}