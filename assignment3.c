#include <stdio.h>
#include "string.h"
//
// Created by justin on 2/2/18.
//


void base(unsigned int number, unsigned int base){
    char out[40];
    char *p = out;
    *p = 0;

    if(base > 36){
        printf("Only up to base 36");
        return;
    }

    while (number > 0){
        char digit = (char)(number % base);
        char c = (digit < 10)?('0'+digit):('A'+digit);
//        printf("%c%s\n",c, out);
        *p++ = c;
        *p = 0;
        number = number/base;
    }
        for(int i=strlen(out)-1;i>=0;i--){
            putchar(out[i]);
        }
        putchar('\n');
}

