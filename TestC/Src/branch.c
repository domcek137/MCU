#include <stdio.h>

#include "branch.h"
#include "greet.h"
#include "processing.h"
#include "phonebook.h"

void rulling(int branch){
    if(branch == 1){
        print_contacts();
    }else if (branch == 2)
    {
        search_by_name();
    }else if (branch == 3)
    {
        search_by_number();
    }else if (branch == 4)
    {
        addContact();
    }else if (branch == 5)
    {
        printf("Goodbye!");
    }else{
        printf("\n\nINVALID OPTION! \n\n");
        decision();
    }
}