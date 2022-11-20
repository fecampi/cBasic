
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <string>
#include <iostream>
 
using namespace std;
 
int main () {
 
    //Arquivo que vai ser lido
    ifstream input("text.txt");
 
    //String que receberá o texto lido
    string context;
 
    ////For para cada linha do arquivo
    for(string line; getline(input, line);){
        context += "\n" + line;
    }
 
    //Mostrar o conteúdo
    cout << context;
 
    return 0;
}