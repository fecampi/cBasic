#include <stdio.h>
#include <string.h>
#include <fstream>
 
using namespace std;
 
int main () {
 
    //Cria o objeto do arquivo
    ofstream file;
 
    //Abre 
    file.open("text.txt");
 
    //Limpa
    file << "";
 
    //Fecha
    file.close();
 
    return 0;
}