#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
int main()
{

    //Definindo Variáveis
    int a = 1;

    //while
    printf("while");
    while (a <= 10)
    {
        //Imprimindo 'a' na tela
        printf("\n%d", a);

        //Incremento
        a++; //a = a + 1;
    }

    //do while
    printf("\ndo while");
    do
    {
        //Imprimindo 'a' na tela
        printf("\n%d", a);

        //Decremento
        a--; //a = a + 1;

    } while (a >= 1);

    //For
    printf("\nFor: 'a++'");
    for (a = 1; a <= 10; a++)
    {
        printf("\n%d", a);
    }

    //andando de 2 em 2
    printf("\nFor: 'a = a - 2'");

    for (a = 10; a >= 0; a = a - 2)
    {
        printf("\n%d", a);
    }

    return 0;
}
