#include <iostream>
#define TAM 10
int top;
int stack[TAM];

void stack_print()
{
    printf("\nstack:  | - ");
    for (int cont = 0; cont < top + 1; cont++)
    {
        printf("%d - ", stack[cont]);
    }
    printf("|\n \n");
}

bool stack_push(int value)
{
    // Confere se a stack está cheia
    if (top == TAM - 1)
    {
        return false;
    }

    top = top + 1;
    stack[top] = value;
    return true;
}

int stack_pop()
{
    // Confere se a stack está vazia
    if (top == -1)
    {
        return 0;
    }
    int topReturn = stack[top];
    stack[top] = 0;
    top = top - 1;
    return topReturn;
}

void stack_constructor()
{
    // Coloca o top negativo para indicar que a stack está vazia
    top = -1;

    for (int cont = 0; cont < TAM; cont++)
    {
        stack[cont] = 0;
    }
}

int main()
{

    stack_print();
    stack_constructor();
    stack_print();
    stack_print();
    stack_print();
    stack_push(1);
    stack_print();
    stack_push(19);
    stack_print();
    stack_push(18);
    stack_print();
    stack_push(17);
    stack_push(16);
    stack_push(15);
    stack_push(14);
    stack_push(13);
    stack_print();
    stack_push(12);
    stack_print();
    stack_push(11);
    stack_print();
    printf("stack_pop: %d", stack_pop());
    stack_print();
    stack_print();
    printf("stack_pop: %d", stack_pop());
    stack_print();
    printf("stack_pop: %d", stack_pop());
    stack_print();
    printf("stack_pop: %d", stack_pop());
    stack_print();
    stack_constructor();
    stack_push(5);
    stack_push(3);
    stack_push(2);
    stack_print();
}