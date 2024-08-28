# Como criar `structs` ?
### Exemplo:
```cpp
struct Pessoa {
    std:: string nome,
    int idade,
    float altura,
    float peso,
}
```
### Como acessar esta `struct`?
Utilizamos ela como se fosse uma váriável com subtipos já definidos, uma mistura de array (?) e variável.
```cpp
std:: cout << "Digite o valor que deseja atribuir a idade: ";
std:: cin >> pessoa.idade;
```
 