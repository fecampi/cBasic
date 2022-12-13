#include <stdio.h>
#include <stdlib.h>
#include <new>

struct member
{
  int value;
  // Ponteiro para o proximo
  struct member *next;
};


int main()
{
  // criar o inicio
  member *cursor;

  // criar um novo valor 1
  member *newValue1 = new member;
  newValue1->value = 10;
  newValue1->next = NULL;
  //faz o ponteiro ir par o primeiro
  cursor = newValue1;

  // criar um novo valor 2
  member *newValue2 = new member;
  newValue2->value = 20;
  newValue2->next = NULL;
  //Cria o encadeamento
  cursor->next = newValue2;

//Lendo a lista
  printf("%d\n", newValue1->value);
  printf("%d\n", newValue2->value);


//Lendo a lista dinamicamente
  while (cursor != NULL)
  {
     printf("%d\n", cursor->value);
     cursor = cursor->next;
  }
  return 0;
}