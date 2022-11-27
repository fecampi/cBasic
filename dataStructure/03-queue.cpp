#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

int rear;
int front;
int queue[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

using namespace std;

void queue_print()
{
    printf("\nqueue:  | - ");
    for (int cont = front; cont < rear + 1; cont++)
    {
        printf("%d - ", queue[cont]);
    }
    printf("|\n \n");
}

void queue_construtor()
{
    front = 0;
    rear = -1;
}

bool queue_push(int value)
{

    if (rear == TAM - 1)
    {
        return false;
    }

    rear = rear + 1;
    queue[rear] = value;
    return true;
}

int queue_pop()
{

    if (front > rear)
    {
        return 0;
    }
    int frontReturn = queue[front];
    queue[front] = 0;
    front = front + 1;
    return frontReturn;
}

int main()
{
    queue_construtor();
    queue_print();
    queue_push(1);
    queue_print();
    queue_push(2);
    queue_print();
    queue_push(3);
    queue_print();
    printf("queue_pop: %d", queue_pop());
    queue_print();
    queue_push(4);
    queue_print();
    printf("queue_pop: %d", queue_pop());
    queue_print();
    printf("queue_pop: %d", queue_pop());
    queue_print();
    printf("queue_pop: %d", queue_pop());
    queue_print();

    return 0;
}