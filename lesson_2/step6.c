/*
    Write a program that reads lines from the console and prints them out as they are read. 
    The program should stop reading when it reads an empty (blank) line.
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
    char str[256];

    printf("Enter lines of text. Enter a blank line to stop.\n");

    do {
        fgets(str, 255, stdin); 
        printf("You entered: %s", str);
    } while (str[0] != '\n');

    // fgets(str, 255, stdin);
    // printf("You entered: %s", str);

    return 0;
}