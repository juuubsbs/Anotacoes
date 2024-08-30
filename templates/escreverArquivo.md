### Escrevendo em um arquivo
#### Passo 1
Criar uma stream do tipo ofstream
````cpp
std::ofstream arquivo;
````
#### Passo 2
Associar o arquivo a um nome
````cpp
arquivo.open("nomeDoArquivo.txt");
````
#### Passo 3
Escrever no arquivo
````cpp
arquivo << "Texto que deseja escrever no arquivo";
````
#### Passo 4
Fechar o arquivo
````cpp
arquivo.close();
````