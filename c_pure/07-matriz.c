#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
int main()
{

    //Criando uma matriz
    int matriz[2][2], i, j;

    //Passando valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    printf("\nmatriz[0][0]: %d", matriz[0][0]);
    printf("\nmatriz[0][1]: %d", matriz[0][1]);
    printf("\nmatriz[1][0]: %d", matriz[1][0]);
    printf("\nmatriz[1][1]: %d", matriz[1][1]);

    //Lendo valores para a matriz
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nDigite o valor para matriz[%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Imprimindo valores na tela
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nmatriz[%d][%d]: %d", i, j, matriz[i][j]);
        }
    }
}