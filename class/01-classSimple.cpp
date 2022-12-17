#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
using namespace std;
class Person
{
public:
    string _name;
    int _age;
    Person(string name, int age)
    {
        _name = name;
        _age = age;
    }

    Person(string name)
    {
        _name = name;
    }
    Person(int age);
    //Encapsulation
    // Setter
    void setId(int _id)
    {
        id = _id;
    }
    // Getter
    int getId()
    {
        return id;
    }

    int incAge(int year);
    void print()
    {
        cout << _name << " "
             << " " << _age << "\n";
    }
// Private attribute
private:
    int _year;
    int id;
};

// Adicionando um método após criar a classe, tem que declarar dentro da classe
int Person::incAge(int year)
{
    _age = _age + year;
    return _age;
}

// Adicionando um contructor após criar a classe.
Person::Person(int age)
{

    _age = age;
}

int main()
{
    // Create an object of Person
    Person person1("Felipe");
    person1._name = "Felipe";
    person1._age = 25;
    person1.setId(212);
    cout << person1.getId() << "\n";

    // Create another object of Person
    Person person2(35);
    person2._name = "Carlos";
    person2._age = 30;

    // Print attribute values
    person1.print();
    person2.print();

    cout << person1.incAge(1) << "\n";

    return 0;
}