#include <iostream>

int main(){

    int salario = 0, quantidade, salarioAtual;

    std::cout << "Digite o numero de salarios: ";
    std:: cin >> quantidade;

    for(int i = 0; i < quantidade; i++){

        std:: cout << "Digite o salario numero " << i+1 << ": ";
        std:: cin >> salarioAtual;

        salario += salarioAtual;

    }

    std:: cout << "A soma dos salarios eh: " << salario;




    return 0;
}