#include <stdio.h>
#include <stdlib.h>
#include <new>

int main(){
 
    int lines, columns, i, j;
 
    //Lendo o tamanho do vetor
    lines = 2;
    columns = 8;

    //Ponteiro de Ponteiro para Matriz
    int **matriz;
 
    //Matriz de ponteiro para ponteiros
    matriz = (int **) new int[lines];
 
    //Alocando memória para cada coluna
    for ( i =0; i < lines ; i ++)
        matriz[i] = (int *)  new int[columns];
 
    //Imprimindo a matriz
    for(i = 0; i < lines; i++){
         for(j = 0; j < columns; j++){
            matriz[i][j] = i;
            printf("%d ",matriz[i][j]);
         }
         printf("\n");
    }
 
    return 0;
}