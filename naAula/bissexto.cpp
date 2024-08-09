#include <iostream>
#include <string>

bool bissexto( int x){

    bool t = false;
    if(x%4 == 0 && x%100 != 100 || x%400 == 0){
            t = true;
    }

    return t;

}
int main(){

    int ano;

    std:: cout << "Digite o ano que deseja saber se eh bissexto: ";
    std:: cin >> ano;


    bool ehBissexto = bissexto(ano);

    std:: cout << "O ano " << ano << " eh ";

    if (ehBissexto){
        std:: cout << "bissexto";
    }
    else std:: cout << "nao bissexto";

    


    return 0;
}