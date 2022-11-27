#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void printVector(int vector[TAM])
{
    int i;
    printf("\n");
    for (i = 0; i < TAM; i++)
    {
        if (vector[i] < 10)
        {
            printf("|0%d|", vector[i]);
        }
        else
        {
            printf("|%d|", vector[i]);
        }
    }
}

// Sorts
void bubbleSort(int vector[TAM])
{
    // Auxiliares
    int x, y, aux;
    // Analisar valor esquerda
    for (x = 0; x < TAM; x++)
    {
        //   y = x+1
        // Analisar valor a direita
        for (y = x + 1; y < TAM; y++)
        {
            printVector(vector);
            // Confere se precisa fazer a troca
            if (vector[x] > vector[y])
            {
                aux = vector[x];
                vector[x] = vector[y];
                vector[y] = aux;
            }
        }
    }
    printVector(vector);
}

void insertionSort(int vector[TAM])
{

    int i, j, atual;

    for (i = 1; i < TAM; i++)
    {

        // Elemento atual em análise
        atual = vector[i];
        // J elemento anterior ao analisado
        j = i - 1;
        // Analisando os anteriores
        while ((j >= 0) && (atual < vector[j]))
        {

            // Posiciona elementos a frente
            vector[j + 1] = vector[j];

            // elemento anterior ao já
            j = j - 1;
            printVector(vector);
        }
        // Colocar o menor número na posição correta
        vector[j + 1] = atual;
    }
    printVector(vector);
}

// Listas pequenas
void selectionSort(int vector[TAM])
{
    int minorValuePosition, aux, i, j;

    for (i = 0; i < TAM; i++)
    {
        minorValuePosition = i;
        // Analisa os elementos na frente
        for (j = i + 1; j < TAM; j++)
        {
            // Se encontrou o menor valor
            if (vector[j] < vector[minorValuePosition])
            {
                minorValuePosition = j;
            }
        }

        // Se mudou troca
        if (minorValuePosition != i)
        {
            aux = vector[i];
            vector[i] = vector[minorValuePosition];
            vector[minorValuePosition] = aux;
            printVector(vector);
        }
        printVector(vector);
    }
}

// Não conheço a lista
void quickSort(int vector[], int began, int end)
{ // Eficiente
    // Organiza em problemas menores
    int left, right, pivo, aux;
    left = began;
    right = end - 1;
    // Ajustando auxiliares do centro
    pivo = vector[(began + end) / 2];
    while (left <= right)
    {
        while (vector[left] < pivo && left < end)
        {
            left++;
        }
        while (vector[right] > pivo && right > began)
        {
            right--;
        }
        if (left <= right)
        {
            // troca
            aux = vector[left];
            vector[left] = vector[right];
            vector[right] = aux;
            // caminha limite para o centro
            left++;
            right--;
        }
    }
    // recursivo para continuar ordenado
    if (right > began)
    {
        quickSort(vector, began, right + 1);
    }
    // recursivo para continuar ordenado
    if (left < end)
    {
        quickSort(vector, left, end);
    }
    printVector(vector);
}

void shellSort(int vector[TAM], int size)
{
    // Eficiente listas grandes
    // trocas entre valores longes um do outro
    // Procura os múltiplos dos números para a troca
    int i, j, value;

    int h = 1;
    // quantos em quantos será o pulo entre análises
    while (h < size)
    {
        h = 3 * h + 1;
    }
    while (h > 0)
    {
        for (i = h; i < size; i++)
        {
            // Elemento em análise
            value = vector[i];
            j = i;
            // Analisando membros anteriores
            while (j > h - 1 && value <= vector[j - h])
            {
                vector[j] = vector[j - h];
                // Elemento anterior ao analisado
                // Faz o j andar para trás
                j = j - h;
            }
            vector[j] = value;
            printVector(vector);
        }
        // Reduz a distância entre as análises
        h = h / 3;
    }
}

// Merge Sort----

// Junta os dois subarrays criados ao dividir o vetor principal
void merge(int vector[], int leftIndex, int middle, int r)
{
    int i, j, k;
    int sizeLeftVector = middle - leftIndex + 1;
    int sizeRightVector = r - middle;

    // Cria dois Arrays temporários
    int leftVector[sizeLeftVector], rightVector[sizeRightVector];

    // Passa os elementos do vetor para os auxiliares
    // vetor da esquerda
    for (i = 0; i < sizeLeftVector; i++)
        leftVector[i] = vector[leftIndex + i];
    // Vetor da direita
    for (j = 0; j < sizeRightVector; j++)
        rightVector[j] = vector[middle + 1 + j];

    // Reseta as variáveis
    i = 0;
    j = 0;
    k = leftIndex;
    while (i < sizeLeftVector && j < sizeRightVector)
    {
        // se valor na esquerda é menor
        if (leftVector[i] <= rightVector[j])
        {
            // Passa para o vetor principal o valor menor
            vector[k] = leftVector[i];
            // Incrementa o auxiliar para passar a análise para os próximos valores do vetor auxiliar
            i++;
        }
        else
        {
            // Passa para o vetor principal o valor menor
            vector[k] = rightVector[j];
            // Incrementa o auxiliar para passar a análise para os próximos valores do vetor auxiliar
            j++;
        }
        // Incrementa o auxiliar para passar a análise para os próximos valores do vetor auxiliar

        k++;
    }

    // Se faltarem alguns elementos do array ESQUERDO passa eles para o array principal
    while (i < sizeLeftVector)
    {
        vector[k] = leftVector[i];
        i++;
        k++;
    }

    // Se faltarem alguns elementos do array DIREITO passa eles para o array principal
    while (j < sizeRightVector)
    {
        vector[k] = rightVector[j];
        j++;
        k++;
    }
}

void mergeSort(int vector[], int leftIndex, int rightIndex)
{
    if (leftIndex < rightIndex)
    {
        // Encontra o meio
        int middle = leftIndex + (rightIndex - leftIndex) / 2;
        // Da metade para trás
        mergeSort(vector, leftIndex, middle);
        // Da metade para frente
        mergeSort(vector, middle + 1, rightIndex);
        // Une os dois subarrays que foram criado
        merge(vector, leftIndex, middle, rightIndex);
        printVector(vector);
    }
}

int main()
{
    printf("__bubble_sort _________________________");
    int vectorBubbleSort[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubbleSort(vectorBubbleSort);
    printf("\n\n__insertion_sort _____________________");
    int vectorInsertionSort[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    insertionSort(vectorInsertionSort);
    printf("\n\n__selection_sort _____________________");
    int vectorSelectionSort[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selectionSort(vectorSelectionSort);
    printf("\n\n__quick_sort _____________________");
    int vectorQuickSort[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    quickSort(vectorQuickSort, 0, TAM);
    printf("\n\n__shell_sort _____________________");
    int vectorShellSort[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    shellSort(vectorShellSort, TAM);
    printf("\n\n__Merge_sort _____________________");
    int vectorMergeSort[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    mergeSort(vectorMergeSort, 0, TAM - 1);
    return 0;
}