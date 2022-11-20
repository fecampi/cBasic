#include <stdio.h>
#include <string.h>

typedef struct Birthday
{
    int day;
    int month;
    int year;
} Birthday;

struct Person
{
    int age;
    char gender;
    char name[255];
    Birthday birthday;
};

int main()
{

    // Criando uma struct
    struct Person felipe;

    // Modificando os campos
    felipe.age = 10;
    felipe.gender = 'p';
    felipe.birthday.day = 28;
    felipe.birthday.month = 2;
    felipe.birthday.year = 1985;
    // Para inserir strings utilizamos a stringCopy
    strcpy(felipe.name, "Felipe");

    // Imprimindo Name / AGE / Gender
    printf("\nPerson: %s, Age: %d,Gender: %c", felipe.name, felipe.age, felipe.gender);

    // Imprimindo Birthday
    printf("\nBirthday: %d/%d/ %d", felipe.birthday.day, felipe.birthday.month, felipe.birthday.year);

    // Lista de structs
    struct Person personList[3];

    // Modificando os campos
    strcpy(personList[0].name, "Mario");
    strcpy(personList[1].name, "Fernando");
    strcpy(personList[2].name, "Roberta");
    personList[0].age = 20;
    personList[1].age = 31;
    personList[2].age = 21;
    personList[0].gender = 'M';
    personList[1].gender = 'M';
    personList[2].gender = 'F';

    // Percorrendo o vetor
    int cont;
    for (cont = 0; cont < 3; cont++)
    {
        printf("\nPerson: %s, Age: %d,Gender: %c", personList[cont].name, personList[cont].age, personList[cont].gender);
    }

    return 0;
}