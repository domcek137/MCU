#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "phonebook.h"
#include "greet.h"

#define MAX_ENTRIES  30
#define MAX_NAME  24
#define MAX_SURNAME 24
#define MAX_PHONE  16


struct T_ENTRY
{
    char name [MAX_NAME];
    char surname [MAX_SURNAME];
    char number [MAX_PHONE];
};

struct T_ENTRY entries[MAX_ENTRIES];

int number_of_entries;

//      vvv     FUNCTIONS       vvv       //


void create_contact(char* name, char* surname, char* number)
{
    struct T_ENTRY entry;

    strncpy(entry.name, name, MAX_NAME-1);
    strncpy(entry.surname, surname, MAX_SURNAME-1);
    strncpy(entry.number, number, MAX_PHONE-1);

    if( number_of_entries<MAX_ENTRIES ) {
        entries[number_of_entries++] = entry;
    }
}

void print_contacts()
{
    for (int i = 0; i < number_of_entries;i++){
        printf("\n%d: %s - %s - %s", i, entries[i].name, entries[i].surname, entries[i].number);
    }
    decision();
};

void search_by_name()
{
    char name[24];
    char refined_name[24];
    int x = 0;
    printf("\nplease enter name:  ");
    scanf("%s", &name);
    if (strlen(name)>sizeof(name))
    {
        printf("name too long");
    }
    
    memset(refined_name, '\0', sizeof(refined_name));
    strncpy(refined_name, name, strlen(name));

    for (int i = 0; i < number_of_entries;i++)
    {
        int output = strcmp(entries[i].name, refined_name);
        if (output == 0)
        {
            printf("%d: %s - %s - %s\n", i, entries[i].name, entries[i].surname, entries[i].number);
            x = 1;
        }
    }
    if (x == 0)
    {
        printf("\n!INVALID NAME!\n");
    }
    decision();
}


void search_by_number()
{
    char number[24];
    char refined_number[24];
    int x = 0;
    printf("\nplease enter nnumber:  ");
    scanf("%s", &number);
    if (strlen(number)>sizeof(number))
    {
        printf("number too long");
    }
    
    memset(refined_number, '\0', sizeof(refined_number));
    strncpy(refined_number, number, strlen(number));

    for (int i = 0; i < number_of_entries;i++)
    {
        int output = strcmp(entries[i].number, refined_number);
        if (output == 0)
        {
            printf("%d: %s - %s - %s\n", i, entries[i].name, entries[i].surname, entries[i].number);
            x = 1;
        }
    }
    if (x == 0)
    {
        printf("\n!INVALID NUMBER!\n");
    }
    decision();
}