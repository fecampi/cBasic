#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int variavel = 20;

    //Imprimindo o valor da variável
    printf("Valor da variável: %d \n", variavel);

    //Imprimindo o endereço de uma variável
    printf("Endereço da variável: %d \n", &variavel);

    //ponteiro recebendo a posição da memoria de a
    int *ponteiro = &variavel;

    *ponteiro = 40;
    //Imprimindo o valor da variável
    printf("Valor da variável após mudar com o ponteiro: %d \n", variavel);

    return 0;
}