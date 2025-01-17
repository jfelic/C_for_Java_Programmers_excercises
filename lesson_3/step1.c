#include <stdio.h>
#include <stdlib.h>

struct Employee 
{
    char* name;
    int id;
};

void time2hms(int time, int* hp, int* mp, int* sp)
{
    *hp = time / (60 * 60);
    time -= *hp * 60 * 60;
    *mp = time / 60;
    time -= *mp * 60;
    *sp = time;
}

// "Constructor" function to create a new Employee struct
struct Employee* new_employee(char* name, int id) {
    struct Employee* new_employee = (struct Employee*)malloc(sizeof(struct Employee));
    if (new_employee == NULL) {
        return NULL; // Allocation failed
    }
    new_employee->name = name;
    new_employee->id = id;
    return new_employee;
}

int main() 
{
    int i = 123; // Stores the value 123 somewhere in memory
    int* i_p = &i; // Initialized to the address in memory of the variable i

    printf("%d\n", *i_p); // Dereference i_p in order to get the value it is pointing at

    *i_p = 987; // Change value of int i by rereferencing it's pointer
    printf("%d, %d\n", i, *i_p);

    // Beginning of time2hms practice:
    int time = 15623;
    printf("--- %d seconds to hours, minutes, and seconds ---\n", time);
    int hours, minutes, seconds;

    time2hms(time, &hours, &minutes, &seconds);

    printf("Hours: %d, Minutes: %d, Seconds: %d\n", hours, minutes, seconds);

    // Practice malloc()
    int* ip = (int*)malloc(sizeof(int));
    if (ip == NULL) 
    {
        // Allocation failed
        printf("Memory allocation failed!\n");
        return 1;
    }
    *ip = 98765;
    printf("Malloc int pointer: %d\n", *ip);
    free(ip);
    ip = NULL;
    
    return 0;
}