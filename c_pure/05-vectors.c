#include <stdio.h>
#include <stdlib.h>

void printVector(int *vector, int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("\nÍndice %d: %d", i, vector[i]);
    }
    printf("\n");
}

//Função principal do programa
int main()
{
    int size;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);
    // ponteiro para o novo vetor
    int *vector;
    // passa o espaço da memória que foi criado o vetor
    // Aloca memória, retornando a posição da memoria
    vector = (int *)malloc(size * sizeof(int));
    //Entrar com valores
    vector[0] = 0;
    // Entrar com valores dinamicamente
    for (int i = 1; i < size; i++)
    {
        printf("\nDigite o valor para a %d posição: ", i);
        scanf("%d", &vector[i]);
    }

    printVector(vector, size);

    return 0;


    return 0;
}
