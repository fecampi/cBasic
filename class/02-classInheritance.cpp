#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
using namespace std;


//Interface
class IPrint {
   public:
      //virtual function
      virtual void print() = 0;
      
   private:
      double dpi;      // Length of a box
};


class Client : public IPrint 
{
    // protected - pode ser acessado na classe herdada
protected:
    int id;

    // private - não pode ser acessado na classe herdada
private:
    string origin = "end";

    // public - pode ser acessado por todos
public:
    void myFunction()
    {
        cout << "is Client: myFunction" << "\n\n";;
    }
    // Polimorfismo
    void print()
    {
        cout << "is Client" << "\n\n";;
    }
};

class Person
{
public:
    Person()
    {
        cout << "Person: no parameters\n";
    }
    Person(int a)
    {
        cout << "Person: int parameter\n";
    }
       // Polimorfismo
    void print()
    {
        cout << "is Person";
    }
};

class Employee : public Person, public Client
{
public:
    Employee(int a)
    {
        id = 1;
        cout << "Employee: id parameter" << id  << "\n\n";
    }
       // Polimorfismo
    void print()
    {
        cout << "is Employee" << "\n\n";
    }
};

;

int main()
{
    Employee employee(0);
    employee.myFunction();
    employee.print();
    return 0;
};