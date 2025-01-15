/*
    Write a function that reads, separately, an integer, a floating-point value, and a string and prints out what it read. 
*/

#include <stdio.h>

void display_user_input() {
    int int_num;
    float float_num;
    char string[255];

    // Int
    printf("Please enter an integer number: ");
    scanf("%d", &int_num);
    printf("The integer number you entered was: %d\n", int_num);

    // Float
    printf("Please enter a decimal number (number will be rounded 2 decimal places): ");
    scanf("%f", &float_num);
    printf("The decimal number you entered was: %.2f\n",float_num);

    // String
    printf("Please enter a string: ");
    scanf("%s", string);
    printf("The string you entered was: %s\n", string);
}

int main(int argc, char* argv[]) {
    display_user_input();
    return 0;
}