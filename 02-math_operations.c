#include <stdio.h>
#include <stdlib.h>
//usar acentos
#include <locale.h>

//numero aleatorios(usar time)
#include <time.h>

//Função principal do programa
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

    //valor aleatorio
    //Responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));
    //Variável que recebe o resto da divisão do número por 5 (aleatorio entre 1 e 5)
    int init = 1, final = 2;
    int aleatorioSegundo = (rand() % final) + init;
    //Imprime o valor
    printf("\n Valor aleatorio: %d", aleatorioSegundo);

    return 0;
}