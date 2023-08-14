#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <time.h>

#include "processing.h"
#include "phonebook.h"
#include "branch.h"
#include "greet.h"


void addContact(){
    char name[20];
    char surname[20];
    char phoneNumber[20];
    printf("Name:   ");
    scanf("%s", &name);
    printf("Surname:   ");
    scanf("%s", &surname);
    printf("Phone number:   ");
    scanf("%s", &phoneNumber);
    create_contact(name, surname, phoneNumber);
    decision();
}