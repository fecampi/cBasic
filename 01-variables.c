
#include <stdio.h>
#include <stdlib.h>
//usar acentos
#include <locale.h>

int main()
{
    // Valores de variaveis

    //Valor Inteiro
    int a;
    a = 50;
    printf("\n O valor INTEIRO de 'a' é igual a %d, Digite o novo valor INTEIRO para 'a': ", a);
    scanf("%d", &a);
    printf("\n Novo valor inteiro para 'a': %d", a);

    //Valor Quebrado
    float b = 1.3;
    float d = 1.8;
    printf("\n O valor QUEBRADO de 'b' é igual a %.1f e o 'd' é igual a %.1f, Digite os novos valores QUEBRADOS para 'b' e 'd: ", b, d);
    scanf("%f %f", &b, &d);
    printf("\n  Novos valores quebrados: %.1f e %.1f ", b, d);

    //Caractere
    char c = 'L';
    printf("\n O valor CHAR de 'c' é igual a %c, Digite um novo valor do tipo CHAR: ", c);
    //limpar entrada principal para char
    fflush(stdin);
    scanf(" %c", &c);
    printf("\n  Novo valor char: %c", c);

    return 0;
}