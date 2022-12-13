#include <stack>
#include <iostream>

using namespace std;

// print
template <typename T>
void print(stack<T> &st)
{
    while (!st.empty())
    { // so exibe o topo
        cout << st.top() << endl;
        // remove
        st.pop();
    }
}

int main()
{
    //PILHA
    stack<int> myStack, stack1;

    // push - Adiciona elemento no fim do array
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    // pop - remove o elemento do topo (ultimo a ser inserido) 
    myStack.pop();

    // top - retorna o elemento do topo(ultimo a ser inserido) sem remover
    cout << "TOPO: " << myStack.top() << endl;

    // empty - Verifica se a pilha está vazia..true se tiver
    cout << "Vazia: " << myStack.empty() << endl;

    // swap -  myStack é substituída pelos valores de stack1
    stack1.push(5);
    stack1.push(6);
    stack1.push(7);
    myStack.swap(stack1);

    // emplace - Adiciona elemento no inicio
    myStack.emplace(8);

    // size - Tamanho da lista
    cout << "Tamanho: " << myStack.size() << endl;

    // Imprimir removendo
    print(myStack);
    
    // empty - Verifica se a pilha está vazia..true se tiver
    cout << "Vazia: " << myStack.empty() << endl;

    int sum = 0;

    return 1;
}