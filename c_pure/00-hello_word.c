
#include <stdio.h>
#include <stdlib.h>
//usar acentos
#include <locale.h>

//Função principal do programa
int main()
{   //limpar
    system("clear");
    //Definiram como padrão que a main tem que retornar um numero inteiro.
    printf("Hello Word!! \n");
    //permitir usar acentos(definir que o compilador use a lingua padrão do sistema)
    setlocale(LC_ALL, "");
    printf("Olá Mundo!! \n");
    //pausar
    getchar();
    return 0;
}