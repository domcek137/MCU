#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

void create_contact(char* name, char* surname, char* number);
void add_contact(struct T_ENTRY entry);
void print_contacts();

//      vvv      FUNCTIONS       vvv       //
int main()
{
    create_contact("jozin", "zbazin", "5485645");
    print_contacts();
}

void create_contact(char* name, char* surname, char* number)
{
    struct T_ENTRY entry;

    strncpy(entry.name, name, MAX_NAME-1);
    strncpy(entry.surname, surname, MAX_SURNAME-1);
    strncpy(entry.number, number, MAX_PHONE-1);

    add_contact(entry);
}

void add_contact(struct T_ENTRY entry)
{
    if( number_of_entries<MAX_ENTRIES ) {
        entries[number_of_entries++] = entry;
    }
}

void print_contacts()
{
    for (int i = 0; i < number_of_entries;i++){
        printf("%d: %s - %s - %s\n", i, entries[i].name, entries[i].surname, entries[i].number);
    }
};