#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10

// Busca em lista não ordenada
int simpleSearch(int vector[TAM], int value)
{
    for (int i = 0; i < TAM; i++)
    {
        if (vector[i] == value)
        {
            return i;
        }
    }
    return -1;
}

// Busca em lista ordenada utilizando a busca binária
int binarySearch(int vetor[TAM], int value)
{
    //        -|[][][*][][]|-

    int leftLimit = 0;
    int rightLimit = TAM - 1;
    int cursor;
    // começa no meio
    while (leftLimit <= rightLimit)
    {

        // Encontrar o meio
        cursor = (leftLimit + rightLimit) / 2;

        // Se o valor é  o cursor.
        if (value == vetor[cursor])
        {
            // Meio       -|[][][(*)][][]|-
            return cursor;
        }

        // Ajustando limites
        if (vetor[cursor] < value)
        {

            // Maior        -[][][*]|[][]|-
            leftLimit = cursor + 1;
        }
        else
        {
            // Menor        -|[][]|[*][][]-
            rightLimit = cursor - 1;
        }
    }

    return -1;
}

int main()
{

    int vector[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98};
    int value = 56;
    printf("simpleSearch - Result Position: %d\n", simpleSearch(vector, value));
    printf("binarySearch - Result Position: %d\n", binarySearch(vector, value));
}