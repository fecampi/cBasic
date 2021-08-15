#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Função principal do programa
int main()
{

    //Definindo uma String
    //std::string palavra
    string palavra;

    //Imprimindo na tela
    cout << "Digite uma palavra";

    //Lendo uma string
    cin >> palavra;

    //Imprimindo uma variável
    cout << "\nA palavra eh:" << palavra;
    return 0;
}