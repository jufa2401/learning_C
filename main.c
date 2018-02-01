#include <stdio.h>
//Experimenting with pointers
int j,k;        // two ints
int *ptr;       // an int's pointer variable

//a method that swaps the values of two int variables
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    j = 1;
    k = 2;
    ptr =&k;
    printf("j has value %d and is stored at %p\n",j,&j);
    printf("k has value %d and is stored at %p\n",k,&k);
    printf("ptr has value %p and is stored at %p\n",ptr,&ptr);
    printf("value of integer pointed to by ptr is %d\n",*ptr);

    printf("We now swap the values of j and k....\n");
    swap(&j, &k);
    printf("j has the value %d, k has the value %d\n",j,k);

    return 0;
}