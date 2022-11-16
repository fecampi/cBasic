#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{

    //Criando uma matriz
    int matriz[2][2], i, j;

    //Lendo valores para a matriz
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            //scanf("%d", &matriz[i][j]);
            cout << "\nDigite o vetor para a matriz[" << i << "][" << j << "] = ";
            cin >> matriz[i][j];
        }
    }

    //Imprimindo valores na tela
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            //cout << "\ni = " << i << " , j = " << j;
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}
