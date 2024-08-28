#include <iostream>


// calculo de peso ideal:
// Feminino:  62,1 * altura – 44,7
// Masculino: 72,7 * altura – 58

int PesoIdeal(char sexo, float altura){

    if( sexo == 'f' || sexo == 'F'){
        int resultado = (altura * 62.1) - 44.7;
        std:: cout << resultado;
    }
    if(sexo == 'm' || sexo == 'M'){
        int resultado = (altura * 72.7) - 58;
        std:: cout << resultado;
    }
    
    return 0;
}

int main(){

    char sexo;
    float altura;

    std:: cout << "Digite a sua altura: ";
    std:: cin >> altura;

    std:: cout << "Digite o seu sexo: ";
    std:: cin >> sexo;

    PesoIdeal(sexo, altura);


    return 0;
}