#include <stdio.h>
#include <stdlib.h>
#include <new>

int main()
{

    // Tamanho a ser criado
    int size, i;

    // Lendo o tamanho do vetor
    size = 10;

    // Criando um ponteiro que recebe o novo vetor vazio
    int *vector = new int[size];

    // Passa valores para o vetor e os imprime na tela
    for (i = 0; i < size; i++)
    {
        vector[i] = i;

        printf(" - %d", vector[i]);
    }
    free(vector);
    return 0;
}