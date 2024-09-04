#include <iostream>
#include <fstream>

std:: ofstream arquivo;


struct aluno{
    std:: string nome;
    char sexo;
    int idade;
    float altura;
};

int printDados (aluno alunos[5], int i){

    std:: cout << "Digite seu nome: ";
    std:: cin >> alunos[i].nome;
    arquivo << "Nome aluno " << i+1 << ": "<< alunos[i].nome << std:: endl;

    std:: cout << "Digite seu sexo (f) feminino, (m) masculino: " << std:: endl;
    std:: cin >> alunos[i].sexo;
    arquivo << "Sexo aluno " << i+1 << ": "<< alunos[i].sexo << std:: endl;

    std:: cout << "Digite sua idade: ";
    std:: cin >> alunos[i].idade;
    arquivo << "Idade aluno " << i+1 << ": " << alunos[i].idade << std:: endl;

    std:: cout << "Digite a sua altura: ";
    std:: cin >> alunos[i].altura;
    arquivo << "Altura aluno " << i+1 << ": "<< alunos[i].altura << std:: endl;

    arquivo << "------------------------------------------------------------------" << std:: endl;

    return 0;
};

int main(){

    arquivo.open ("arquivo.md");
    
    aluno alunos[5];
    for(int i = 0; i < 5; i++){

        std:: cout << "Digite seus dados aluno numero " << i+1 << ": \n";
        printDados(alunos, i);

    }

    arquivo.close();

return 0;

}