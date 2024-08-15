#include <iostream>

int main(){

    std:: setlocale(LC_ALL, "pt_BR.UTF-8");

    int numAlunos = 0;
    float nota = 0, sumNota = 0, media = 0, i = 0;

    std:: cout << "   Digite aqui a quantidade de alunos para obter a média: ";
    std:: cin >> numAlunos;

    while ( i < numAlunos){
        std:: cout << "Digite a nota do aluno numero " << i + 1 << " : ";
        std:: cin >> nota;

        sumNota += nota;

    }

    media = sumNota/numAlunos;

    std:: cout << "A média da turma é: " << media;
     





    return 0;
}