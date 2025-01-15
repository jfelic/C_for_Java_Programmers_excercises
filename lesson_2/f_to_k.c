#include <stdio.h>
/*/ 
	Write a program that stores a temperature in degrees Fahrenheit using a variable and 
	converts it to Kelvins using the following formula: K = (((F - 32) * 5) / 9) + 273.15
*/ 
float f_to_k(float f) {
	float k = (((f - 32) * 5) / 9.0) + 273.15;
	return k;
}

int main() {
	float f = 32.0;
	float k = f_to_k(f);
	printf("%.2fF = %.2fK\n", f, k);
	return 0;
}