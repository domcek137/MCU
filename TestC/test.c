#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ENTRIES  30
#define MAX_NAME  24
#define MAX_PHONE  16
//#include "greet.h"

struct T_ENTRY {
    char name [MAX_NAME];
    char phone [MAX_PHONE];
};

struct T_ENTRY entries[MAX_ENTRIES];

int number_of_entries = 0;

struct T_ENTRY create_entry(char* name, char* phone);
void add_entry(struct T_ENTRY entry);

int main()
{
    struct T_ENTRY entry1 = create_entry("1eoedsdsdsdsdsdsdsdsxssds11", "8563543");

    add_entry(entry1);

    struct T_ENTRY entry2 = create_entry("oeoe2", "28563543");

    add_entry(entry2);
    
    for (int i = 0; i < number_of_entries;i++){
        printf("%d: %s - %s\n", i, entries[i].name, entries[i].phone);
    }
    return 0;
}

struct T_ENTRY create_entry(char* name, char* phone) 
{
    struct T_ENTRY entry;
    strncpy(entry.name, name, MAX_NAME-1);
    strncpy(entry.phone, phone, MAX_PHONE-1);
    return entry;
}

void add_entry(struct T_ENTRY entry) {
    if( number_of_entries<MAX_ENTRIES ) {
        entries[number_of_entries++] = entry;
    }
}