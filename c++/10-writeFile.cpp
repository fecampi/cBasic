#include <stdio.h>
#include <string.h>
#include <fstream>
 
using namespace std;
 
int main () {
    //------Escrevendo....
    //Cria o objeto de arquivo
    ofstream fileOut;
 
    //Abre o arquivo ou cria caso não exista e escolhe o formato para abrir nesse caso std
    fileOut.open("text.txt", std::ios_base::app);
 
    //Escreve algo
    fileOut << "\nExemplo..";
 
    //Fecha o arquivo
    fileOut.close();
 
    return 0;
}