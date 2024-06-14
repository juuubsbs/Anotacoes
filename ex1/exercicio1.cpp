#include <iostream>

int main() {
    
    int array[5], i;

    for (i = 0; i<5; i++){
        std:: cout << "Digite o numero " << i + 1 << " : ";
        std:: cin >> array[i];
    }
    i=0;

    for (i = 0; i<5; i++){
        std:: cout << "O numero na posicao " << i + 1 << " eh: " << array[i] << std:: endl;
    }






    return 0;
}
