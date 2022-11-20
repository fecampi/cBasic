#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main () {
 
    //Cursor que irá percorrer cada letra
    int cursor;
    char textContent[255];
    //Contador
    int cont = 0;
 
    //Arquivo a ser lido
    FILE *file;
 
    //Abre o arquivo no diretório no modo leitura
    file = fopen("text.txt", "r");
 
 
    //Se o arquivo existe
    if(file){
        //Enquanto o cursor não for diferente do fim do arquivo
        while((cursor = getc(file)) != EOF){
            //Imprime na tela
            printf("%c", cursor);
            //Vetor de char recebe a letra atual
            textContent[cont] = cursor;
            //Incrementa a contagem de letras
            cont++;
        }
 
        //Fecha o arquivo
        fclose(file);
 
    }
 
    //Imprimindo conteúdo lido
    for(cont = 0; cont < strlen(textContent) - 2; cont++){
        printf("%c",textContent[cont] );
    }
 
    return 0;
}