#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

    /* Para determinar se um triângulo é:
        -> Equilátero: Todas as medidas iguais ( x == y && x == z && y == z);
        -> Isósceles: Dois lados de mesma medida ( x == y || x == z || y == z ) -> else if; 
        -> Escaleno: Todos os lados possuem medidas diferentes ( x != y && x != z && y != z ).
       Precisamos receber três medidas e utilizar && e ||
    */

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double lado1, lado2, lado3;
    
    cout << "Vamos descobrir a classificação de seu triângulo, digite o primeiro lado: ";
    cin >> lado1;
    
    cout << "Agora digite o segundo lado: ";
    cin >> lado2;
    
    cout << "Por fim, digite o terceiro lado: ";
    cin >> lado3;
    
    //teste se o triângulo é equilatero
    if ( lado1 == lado2 && lado1 == lado3 && lado2 == lado3)
    {
        cout << "Seu triângulo é equilatero";
    }
    else if ( lado1 == lado2 || lado1 == lado3 || lado2 == lado3 )
    {
        cout << "Seu triângulo é isósceles";
    }
    else if ( lado1 != lado2 && lado1 != lado3 && lado2 != lado3 )
    {
        cout << "Seu triângulo é escaleno";
    }
    
    system("pause");
    return 0;
}
