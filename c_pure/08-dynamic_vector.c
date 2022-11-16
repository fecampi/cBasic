#include <stdio.h>
#include <stdlib.h>



int main()
{

    // Ponteiro que vai apontar para o vector criado
    int *vector, size, i;

    // Lendo o tamanho do vetor
    printf("Digite um tamanho");
    scanf("%d", &size);

    // Criando o vetor com o tamanho informado
    vector = (int *)malloc(size * sizeof(int));

    // Colocando alguns valores no vector
    vector[0] = 1;
    vector[1] = 2;
    vector[2] = 3;

    // Imprimindo o vector na tela
    for (i = 0; i < size; i++)
    {
        printf(" - %d", vector[i]);
    }

    // Libera a memória após usar o vector
    free(vector);

    return 0;
}