#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matriz, lines, columns, i, j;

    lines = 2;
    columns = 5;

    // Alocando memória para o vetor de linhas
    matriz = (int **)malloc(lines * sizeof(int *));

    // Alocando memória para as colunas de cada linha
    for (i = 0; i < lines; i++)
    {
        matriz[i] = (int *)malloc(columns * sizeof(int));
    }

    // Preenchendo valores e imprimindo na tela
    for (i = 0; i < lines; i++)
    {
        for (j = 0; j < columns; j++)
        {
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);

    return 0;
}