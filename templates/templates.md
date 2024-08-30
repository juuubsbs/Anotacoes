#### O que permite?
 Criar Funções genéricas, como generalizadoras de tipos, ao contrario de sobrecargas que irão
 prever dois tipos ou mais de parâmetros, templates generalizam os tipos `int` `char` `string`...
#### Exemplo:
```cpp
template <typename T>
T soma(T a, T b){
    return a + b;
}
```
É preciso observar que o `typename` declarado em `template <typename T>` é o tipo 'T' que será generalizado.