#include <iostream> 


int Resto(){


    int num1 = 27, num2 = 4, resultado = num1/num2, resto = 0;

    resto = num1 - (resultado * num2);

    return resto;
}


int main(){

    std:: cout << Resto();

    if(Resto() == 3){
        std:: cout << "eeee";
    }



    return 0;
}