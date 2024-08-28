#include <iostream>

//imprima uma função chamada castigo de acordo com oo número que o usuário digitar

void castigo(int vezes){

    for (int i = 0; i < vezes; i++){
        std:: cout << "Nao vou colar na prova\n";
    }
}

int main(){

    int vezes;

    std:: cout << "Digite um numero inteiro: ";
    std:: cin >> vezes;

    castigo(vezes);



    return 0;
}