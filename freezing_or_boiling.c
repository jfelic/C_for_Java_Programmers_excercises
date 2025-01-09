/*
    Add code to test whether the temperature is less than or equal to 32 °F, 
    in which case it should print “That’s freezing!”, or is greater than or equal to 212 °F, 
    in which case it should print ”That’s boiling!”, otherwise it should print “That’s nice.” 
*/

#include <stdio.h>

const char* freezing_or_boiling(float temp) {
    if (temp <= 32.00) {
        return "That's freezing!";
    } else if (temp >= 212.00) {
        return "That's boiling!";
    } else {
        return "That's nice.";
    }
}
int main() {
    const char* result = freezing_or_boiling(10.00);
    printf("%s\n", result);
    return 0;
}