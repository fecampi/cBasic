#include <stdio.h>
// utilizar
#include <string>
#include <iostream>
// Alocar memoria
#include <new>

// Para utilizar <<
using namespace std;

// Struct para Person
struct Person
{
    string age;
    string name;
};

int main()
{

    // Criando um ponteiro para o struct criado
    Person *felipe = new Person;

    // Modificando  -> insert
    felipe->age = 30;
    felipe->name = "Felipe";

    // Exibindo
    cout << "Person:" << felipe->name << ", Cor:" << felipe->age;

    // Criando uma lista de persons
    Person *pointerPersons = new Person[2];

    // Modificando
    pointerPersons[0].name = "Carlos";
    pointerPersons[0].age = 30;
    pointerPersons[1].name = "Mario";
    pointerPersons[1].age = 32;

    // Exibindo
    int i;
    for (i = 0; i < 2; i++)
    {
        cout << "\nPerson:" << pointerPersons[i].name << ", Age:" << pointerPersons[i].age;
    }

    return 0;
}