#include <stdio.h>
#include <stdlib.h>
//usar acentos
#include <locale.h>

int main()
{
    //usar acentos
    setlocale(LC_ALL, "");

    //Definindo Variáveis
    int a = 6, b = 4;

    //Soma
    printf("\n A soma de %d e %d = %d", a, b, a + b);

    //Subtração
    printf("\n A substração de %d e %d = %d", a, b, a - b);

    //Divisão
    printf("\n A divisao de %d e %d = %d", a, b, a / b);

    //Multiplicação
    printf("\n A multiplicação de %d e %d = %d", a, b, a * b);

    //Resto da Divisão
    printf("\n O resto da divisao entre %d e %d = %d", a, b, a % b);

    //Valor Absoluto
    printf("\n O valor absoluto de -3 = %d", abs(-3));

    return 0;
}