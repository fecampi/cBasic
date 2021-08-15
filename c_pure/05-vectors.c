#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//Função principal do programa
int main()
{

    //Criando um valor com tamanho da constante
    int vetor[TAM], cont;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Exibindo os valores do vetor
    printf("\nPosicao 0: %d", vetor[0]);
    printf("\nPosicao 1: %d", vetor[1]);
    printf("\nPosicao 2: %d", vetor[2]);

    //Lendo 3 valores para o vetor
    for (cont = 0; cont < TAM; cont++)
    {
        printf("\nDigite o valor para a %d posição: ", cont);
        scanf("%d", &vetor[cont]);
    }

    //Imprimindo vetor em um laço de repetição
    for (cont = 0; cont < TAM; cont++)
    {
        printf("\nPosicao %d : %d", cont, vetor[cont]);
    }


    return 0;
}
