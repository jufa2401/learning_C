#include <stdio.h>
//
// Created by justin on 2/2/18.
//

// this function prints  from 1 to 15 in a loop, that is never escaped

void assignemnt1q1(){
    int i;
//    while (1){
        for (int j = 0; j<16;j++){
        printf("i: %d\n",i);
        i = (i+1)&15;

    }

}

