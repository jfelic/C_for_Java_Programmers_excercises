/*
    Write code to print the numbers from 1 to 10, and to print the numbers from 10 down to 1 counting by twos.
*/

#include <stdio.h>

int main() {
    int i, j;

    printf("Print numbers from 1 to 10:\n");
    for (i = 1; i < 11; i++) {
        printf("%d\n", i);
    } 

    printf("Print numbers from 10 to 1, counting down by twos:\n");
    for(j = 10; j > 0; j -= 2) {
        printf("%d\n", j);
    }

    return 0;
}