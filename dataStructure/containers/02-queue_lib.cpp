#include <iostream>
#include <queue>

using namespace std;
template <typename T>
void print(queue<T> &queue)
{
    while (!queue.empty())
    { // so exibe o topo
        cout << queue.front() << endl;
        // remove
        queue.pop();
    }
}

int main()
{
    //FILA
    queue<int> myQueue;

    // push - Adiciona elemento no fim do array
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);

    // size - tamanho da myQueue
    cout << "Tamanho da myQueue: " << myQueue.size() << endl;

    // front - Mostra o primeiro elemento que foi inserido sem remover
    cout << "Primeiro Elemento inserido: " << myQueue.front() << endl;

    // pop - remove o primeiro elemento que foi inserido
    myQueue.pop();

    // emplace - adiciona elemento no fim da myQueue
    myQueue.emplace(5);
    myQueue.emplace(6);

    //back  - retorna o elemento mais novo da myQueue
    cout << "Ultimo elemento inserido: " << myQueue.back() << endl;

    print(myQueue);
}