
#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
using namespace std;
int sizeList = 0;

typedef struct person
{
    string name;
    int id;
} Person;

typedef struct Service
{
    int sizeList = 0;
    person *pointerList;
    int position;
    bool insertBeginning(string nome, int id)
    {
        if (sizeList == 0)
        {
            person *list1 = new person[1];
            list1[0].name = nome;
            list1[0].id;
            sizeList = sizeList + 1;
            pointerList = list1;
            printList();
            return true;
        }
        else
        {
            person *list2 = new person[sizeList + 1];
            list2[0].name = nome;
            list2[0].id = id;
            for (int i = 0; i < sizeList; i++)
            {
                list2[i + 1].name = pointerList[i].name;
                list2[i + 1].id = pointerList[i].id;
            }
            sizeList = sizeList + 1;
            pointerList = list2;
            printList();
            return true;
        }
    }

    bool insertEnd(string nome, int id)
    {
        position = sizeList;
        person *list2 = new person[sizeList + 1];
        list2[sizeList].name = nome;
        list2[sizeList].id = id;
        for (int i = 0; i < sizeList; i++)
        {
            list2[i].name = pointerList[i].name;
            list2[i].id = pointerList[i].id;
        }
        sizeList = sizeList + 1;
        pointerList = list2;
        printList();
        return true;
    }

    void printList()
    {
        cout << "\nLista: \n";
        for (int i = 0; i < sizeList; i++)
            cout << i << " - " << pointerList[i].name << "," << pointerList[i].id << "\n";
    }

    void insertPosition(string nome, int id, int position)
    {

        if (sizeList <= 1)
        {
            return;
        }

        person *list2 = new person[sizeList + 1];

        for (int i = 0; i < position; i++)
        {
            list2[i].name = pointerList[i].name;
            list2[i].id = pointerList[i].id;
        }

        list2[position].name = nome;
        list2[position].id;

        for (int i = 0; i < sizeList + 1; i++)
        {
            list2[i].name = pointerList[i - 1].name;
            list2[i].id = pointerList[i - 1].id;
        }
        pointerList = list2;
        sizeList = sizeList - 1;
        printList();
    }
    void deletePosition(int position)
    {
        if (sizeList < 1)
        {
            return;
        }
        person *list2 = new person[sizeList - 1];

        for (int i = 0; i < sizeList - 1; i++)
        {
            if (i < position)
            {
                list2[i].name = pointerList[i].name;
                list2[i].id = pointerList[i].id;
            }
            else
            {
                list2[i].name = pointerList[i + 1].name;
                list2[i].id = pointerList[i + 1].id;
            }
        }
        pointerList = list2;
        sizeList = sizeList - 1;
        printList();
    }
    void deleteBeginning()
    {
        if (sizeList > 0)
        {
            person *list2 = new person[sizeList - 1];
            for (int i = 1; i < sizeList; i++)
            {
                list2[i - 1].name = pointerList[i].name;
                list2[i - 1].id = pointerList[i].id;
            }

            pointerList = list2;
            sizeList = sizeList - 1;
            printList();
            return;
        }
        return;
    }
    void deleteEnd()
    {
        if (sizeList > 0)
        {
            position = sizeList - 1;
            person *list2 = new person[sizeList - 1];
            for (int i = 0; i < sizeList - 1; i++)
            {
                list2[i].name = pointerList[i].name;
                list2[i].id = pointerList[i].id;
            }

            pointerList = list2;
            sizeList = sizeList - 1;
            printList();
            return;
        }
        return;
    }
    string getId(int id)
    {
        string name = "Nao Encontrado";
        for (int i = 0; i < sizeList; i++)
        {
            if (pointerList[i].id == id)
            {
                name = pointerList[i].name;
            }
        }

        return name;
    }
} Service;

struct Controller
{
    string nome;
    int id;
    int position;
    Service service;

    int createMenuView()
    {
        int option;
        cout << "Operações \n";
        cout << "1 - Inserção de um node no inicio da lista \n";
        cout << "2 - Inserção de um node no fim da lista \n";
        cout << "3 - Inserção de um node na posição N \n";
        cout << "4 - Retirar um node do inicio da lista \n";
        cout << "5 - Retirar um node no fim da lista \n";
        cout << "6 - Retirar um node na posição N \n";
        cout << "7 - Procurar um node com o campo ID \n";
        cout << "8 - Imprimir a Lista. \n";
        cout << "9 - Sair do sistema. \n";
        cout << "\nEscolha um numero e pressione ENTER: ";
        cin >> option;
        return option;
    }

    void insertBeginning()
    {
        ;
        cout << "\n-- Inserir um node no começo da lista --";
        cout << "\nDigite o nome: ";
        cin >> nome;
        cout << "Digite o ID: ";
        cin >> id;
        bool response = service.insertBeginning(nome, id);
        if (response)
        {
            cout << "\nUsuário: " << nome << ",ID: " << id << " adicionado ao inicio da lista.\n";
            return;
        }
        else
        {
            cout << "\nUsuário: " << nome << ",ID: " << id << " não foi adicionado ao inicio da lista.\n";
            return;
        }
    }
    void insertEnd()
    {
        bool response;
        cout << "Funcao Escolhida: Inserir um node no fim da lista";
        cout << "\nDigite o nome: ";
        cin >> nome;
        cout << "Digite o ID: ";
        cin >> id;
        response = service.insertEnd(nome, id);
        if (response)
        {
            cout << "\n Usuário: " << nome << ",ID: " << id << " adicionado ao fim da lista2. \n";
            return;
        }
        else
        {
            cout << "\n Usuário: " << nome << ",ID: " << id << " não foi adicionado ao fim da lista. \n";
            return;
        }
    }
    void insertPosition()
    {
        cout << "Funcao Escolhida: Inserir um node na position N da lista";
        cout << "\nDigite a Posicao: ";
        cin >> position;
        cout << "\nDigite o nome: ";
        cin >> nome;
        cout << "Digite o ID: ";
        cin >> id;
        service.insertPosition(nome, id, position);
        return;
    }
    void deleteBeginning()
    {
        service.deleteBeginning();
        return;
    }
    void deleteEnd()
    {
        cout << "Funcao Escolhida: Retirar um node do fim da lista\n";
        service.deleteEnd();
        return;
    }
    void deletePosition()
    {
        cout << "Funcao Escolhida: Retirar um node do de uma position da lista\n";
        cout << "\nDigite a posição a excluir: ";
        cin >> position;
        service.deletePosition(position);
        return;
    }
    void getId()
    {
        string response;
        cout << "Procurar um node com o campo ID\n";
        cout << "\nDigite o ID a buscar: ";
        cin >> id;
        response = service.getId(id);
        cout << response << "\n";
    }
    void printList()
    {
        cout << "Imprimir a Lista.\n";
    }
};

// View
int main()
{
    Controller controller;
    int option = 1;
    while (option < 10 && option > 0)
    {
        option = controller.createMenuView();
        switch (option)
        {
        case 1:
            controller.insertBeginning();
            break;
        case 2:
            controller.insertEnd();
            break;
        case 3:
            controller.insertPosition();
            break;
        case 4:
            controller.deleteBeginning();
            break;
        case 5:
            controller.deleteEnd();
            break;
        case 6:
            controller.deletePosition();
            break;
        case 7:
            controller.getId();
            break;
        case 8:
            controller.printList();
            break;
        default:
            break;
        }
    }
    cout << "Fim: \n";
}
