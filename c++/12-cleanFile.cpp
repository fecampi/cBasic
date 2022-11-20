#include <stdio.h>
#include <string.h>
#include <fstream>
 
using namespace std;
 
int main () {
 
    //Cria o objeto do arquivo
    ofstream file;
 
    //Abre o arquivo
    file.open("text.txt");
 
    //Esvazia o arquivo
    file << "";
 
    //Fecha o arquivo
    file.close();
 
    return 0;
}