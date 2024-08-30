#include <iostream>


struct horario{
    int dia, hora, minuto, segundo;
};

int leiaHorario (horario &horarioo){
        std:: cout << "Hora: ";
        std:: cin >> horarioo.hora;

        std:: cout << "Minuto: ";
        std:: cin >> horarioo.minuto;

        std:: cout << "Segundo: ";
        std:: cin >> horarioo.segundo;

        std:: cout << "\n\a" << horarioo.hora << ":" << horarioo.minuto << ":" << horarioo.segundo << std:: endl;

    return 0;      
}

void ajeitaTudo (horario &resultado){
    resultado.dia = resultado.hora / 24;
    resultado.hora %= 24 + resultado.minuto / 60;
    resultado.minuto %= 60 + resultado.segundo / 60;
    resultado.segundo %= 60;
}

horario somaHorario( horario horario1, horario horario2){
    horario resultado;

    resultado.hora = horario1.hora + horario2.hora;
    resultado.minuto = horario1.minuto + horario2.minuto;
    resultado.segundo = horario1.segundo + horario2.segundo;

    return resultado;
}


int main(){

    horario horario1, horario2, resultado;

    std:: cout << "Digite as informacoes de horario1: \n";
    leiaHorario(horario1);

    std:: cout << "\nDigite as informacoes de horario2: \n";
    leiaHorario(horario2);

    resultado = somaHorario(horario1, horario2);

    ajeitaTudo(resultado);

    std:: cout << "\nO resultado eh: " << 
    resultado.dia << " dias " << 
    resultado.hora << " : " << 
    resultado.minuto << " : " << 
    resultado.segundo;

    


    return 0;
}