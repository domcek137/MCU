#include <stdio.h>
#include <stdlib.h>

#include "greet.h"
#include "branch.h"

void greetUser(){

    char name[20];
    printf("enter your name:");
    scanf("%s", name);
    printf("hello ");
    puts(name);
    decision();
}

void decision(){

    int number;
    printf("\nWhat would you want to do? \n");
    printf("1.  view all \n");
    printf("2.  search by name \n");
    printf("3.  search by phone number \n");
    printf("4.  add contact \n");
    printf("5.  EXIT \n");
    printf("[1/2/3/4/5]   ");
    scanf("%d", &number);
    rulling(number);
}