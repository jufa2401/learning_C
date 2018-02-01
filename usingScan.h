#include <stdio.h>
//
// Created by Justin on 01/02/2018.
//

void name() {
//    we create a character array, with the length 30. Only thus 29 characters available for the user
    char firstname[30],lastname[30];
    printf("What is your name?\n");
//    We specify that scan f wants 2 strings
    scanf("%s%s",firstname,lastname);
    printf("Your name is %s %s \n\n",firstname,lastname);
}
void birthday(){
    int month, day, year;
    printf("What's your birth date");
    scanf(" %d/%d/%d\n\n",&month,&day,&year);
    printf("\nBirth date %d/%d/%d\n\n",month,day,year);
}