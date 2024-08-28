#include <iostream>

int main(){

    int vetor[20];

    for(int i = 0; i < 20; i++){
        std:: cout << "Digite o valor da posicao " << i+1 << ": ";
        std:: cin >> vetor[i];
    }


    for(int i = 0; i < 20; i++){
        if ( vetor[i]%2 == 0){
            std:: cout << "O valor " << vetor[i] << " da posicao " << i+1 << " eh par!" << std:: endl;
        }

    }



    return 0;
}