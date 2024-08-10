#include <iostream>
#include <string>
#include <locale>

int main(){

    std:: setlocale(LC_ALL, "pt_BR.UTF-8");

    int media, frequencia;

    std:: cout << "Olá, vamos descobrir se voce foi aprovado(a) ou reprovado(a)!" << std:: endl;
    std:: cout << "Primeiro, digite sua média na disciplina: ";
    std:: cin >> media;

    std:: cout << "Agora digite a sua frequência: ";
    std :: cin >> frequencia;

    if(media < 6){

        std:: cout << "Lamento, mas você foi reprovado(a) por média\n"; 
    }
    if (frequencia > 36){

        std:: cout << "Lamento, mas você reprovou por frequência :(";
    }
    


    return 0;
}