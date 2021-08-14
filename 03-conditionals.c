#include <stdio.h>
#include <stdlib.h> //usar acentos
#include <locale.h>
#include <stdbool.h>

//Função principal do programa
int main()
{

    //Condicionais matematicas

    //Maior (a > 2)
    //Maior ou Igual (c >= b)
    //Menor (a < 10)
    //Menor ou igual (a <= 10)
    //Diferente (c != 10)

    //Conectivo logico

    //Conectivo Lógico E (AND) , Se UMA COMPARAÇÃO for FALSA, Não entra no bloco (f > 5 && f > 15)
    //Conectivo Lógico OU (OR) , Se UMA COMPARAÇÃO for VERDADEIRA, já entra no bloco (f > 5 || f > 15)
    //Misturando Conectivos ( (a > 5 && a < 15) || a == 20 )

    //usar acentos
    setlocale(LC_ALL, "");

    //Definindo Variáveis

    int a = 4, option = 3, c = 2;
    float b = 2.5;
    bool d = true, e = false;
    char letra = 'x';

    //Condicional Simples
    if (d)
    {
        printf("\n A eh verdadeiro");
    }
    //inverso
    if (!e)
    {
        printf("\n B eh falso");
    }

    //Número par ou impar
    if (a % 2 == 1)
    {
        printf("\n A variável a é impar");
    }
    else
    {
        printf("\n A variável a é par");
    }

    //Condicional Composta
    if (option == 1)
    {
        printf("\n A opção = 1");
    }
    else if (option == 2)
    {
        printf("\n A opção = 2");
    }
    else
    {
        printf("\n A opção nao é igual a 1 e nem 2\n");
    }

    //Comparando Código ASCII
    printf("\n Codigo da letra = %d", letra);
    if (letra == 120)
    {
        printf("\n A letra eh x.");
    }

    //switch case
    switch (c)
    {
    case 1:
        printf("\n Opção escolhida: 1");
        break;
    case 2:
        printf("\n Opção escolhida: 2");
        break;
    case 3:
        printf("\n Opção escolhida: 2");
        break;
    default:
        printf("\n Opção invalida");
        break;
    }
}
