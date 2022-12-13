// CPP program to show the implementation of List
#include <iostream>
#include <iterator>
#include <list>
using namespace std;

// function for printing the elements in a list
void showlist(list<int> g)
{
    for (list<int>::iterator it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

// Driver Code
int main()
{

    list<int> gqlist1, gqlist2;

    // push_back - Adiciona no fim da lista
    gqlist1.push_back(1);
    gqlist1.push_back(2);
    gqlist1.push_back(3);
    gqlist1.push_back(4);
    gqlist1.push_back(5);
    cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);

    // push_front - Adiciona no inicio da lista
    gqlist2.push_front(10);
    gqlist2.push_front(11);
    gqlist2.push_front(12);
    gqlist2.push_front(13);
    cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);

    // front -  Obter o valor do inicio da lista (sem remover da lista)
    cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\nList 1 (gqlist1.front) is : ";
    showlist(gqlist1);

    // front -  Obter o valor do fim da lista (sem remover da lista)
    cout << "\ngqlist1.back() : " << gqlist1.back();
    cout << "\nList 1 (gqlist1.front) is : ";
    showlist(gqlist1);

    // pop_front - Remove o valor que está no inicio da lista
    cout << "\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);

   // pop_front - Remove o valor que está no fim da lista
    cout << "\ngqlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);

   // reverse - Inverter a lista
    cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);

   // reverse - Ordenar a lista
    cout << "\ngqlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);

    return 0;
}