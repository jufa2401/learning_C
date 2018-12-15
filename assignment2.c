#include <stdio.h>
//
// Created by justin on 2/2/18.
//


void binary(unsigned int number){

    int sizeBytes = sizeof(unsigned int);
    int sizeBits = 8 * sizeBytes;

    for (int i=0;i<sizeBits;i++){
        unsigned int mask = 1<<(sizeBits-i-1);
        int bit = number & mask;
        if(i%4==0 && i!=0)putchar('.');
        putchar(bit?'1':'0');
    }
    putchar('\n');
}

