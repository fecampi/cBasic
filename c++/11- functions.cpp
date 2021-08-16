#include <stdio.h>
#include <stdlib.h>

using namespace std;

void returnVoid()
{
    printf("-0---0-\n");
    printf("---|---\n");
    printf("--___--\n");
}

int returnInt()
{
    return 10;
}

char returnChar()
{
    return 'c';
}

bool returnBool()
{
    return true;
}

int returnSuccessor(int number)
{
    return number + 1;
}

int returnSum(int number1, int number2)
{
    return number1 + number2;
}

void increasePointer(int *number)
{
    *number = *number + 10;
}

void printVector(int *vector, int size)
{
    int cont;
    for (cont = 0; cont < size; cont++)
        printf("\n %d", vector[cont]);
}

void modifyVector(int *vector, int size)
{
    int cont;
    for (cont = 0; cont < size; cont++)
        vector[cont] = vector[cont] + 1;
}

//caso fique abaixo do main é preciso colocar aqui.
float returnFloat();

int main()
{
    //função sem retorno
    returnVoid();

    //função retornando um numero inteiro
    int a = returnInt();
    printf("\n%d", a);

    //função retornando numeros quebrados
    float b = returnFloat();
    printf("\n%.2f", b);

    //função retornando char
    char c = returnChar();
    printf("\n %c", c);

    //função retornando boll
    char d = returnBool();
    printf("\n %d", d);

    //função com parametro
    int successor = returnSuccessor(2);
    printf("\n %d", successor);

    //função com parametro
    int sum = returnSum(2, 6);
    printf("\n %d", sum);

    //função com Ponteiro
    increasePointer(&a);
    printf("\n%d", a);

    //função com Vetor e ponteiro
    int vector[4] = {1, 2, 3, 4};
    printVector(vector, 4);

    //função com Vetor e modificação no ponteiro
    modifyVector(vector, 4);
    printVector(vector, 4);
    return 0;
}

float returnFloat()
{
    return 5.5;
}