#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char firstName[11] = "Konstantin";
    char lastName[8] = "Kirchev";
    char age = 33;
    char gender = 'm';
    char pidNumber[11] = "8306112507";
    int uniqueEmpNumber = 27569999;
    
    printf("First name: %s\nLast name: %s\nAge: %d\nGender: %c\nPersonal ID: %s\nUnique Employee number: %d",
            firstName, lastName, age, gender, pidNumber, uniqueEmpNumber);
    
    return (EXIT_SUCCESS);
}

