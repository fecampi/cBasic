#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>



//Função principal do programa
int main()
{

    //Definindo uma String
    //std::string palavra
    std::string palavra;

    //Imprimindo na tela
    std::cout << "Digite uma palavra: ";

    //Lendo uma string
    std::cin >> palavra;

    //Imprimindo uma variável
    std::cout << "\nA palavra é " << palavra << "!";
    return 0;
}