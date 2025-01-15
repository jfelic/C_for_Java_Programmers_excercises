/*
    C is not an object-oriented language, so it doesn’t have methods defined in classes. 
    Instead, it has the more general idea of a “function”. 
    This is covered in the C for Java Programmers document. 
    Object-oriented programming in C is covered in the next lesson in this tutorial.

    For now, write the following two functions:

        A function that has a single integer parameter and that prints that many stars (asterisks).
        A function that computes and returns the temperature in Kelvin of a temperature given in degrees Fahrenheit.

    Include code to demonstrate your functions being used. 
*/
#include <stdio.h>

void printStars(int num) {
    printf("Stars:");
    for (int i = 0; i < num; i++) {
        printf(" *");
    }
}

float f_to_k(float f) {
	float k = (((f - 32) * 5) / 9.0) + 273.15;
	return k;
}

int main() {
    printStars(10);
    printf("\n");
    
    printf("58 F = %.2f K\n", f_to_k(58.0));
    return 0;
}