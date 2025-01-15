#include <stdio.h>

struct Employee {
    char* name;
    int id;
};

// "Constructor" function to create a new Employee struct
struct Employee* new_employee(char* name, int id) {
    struct Employee* new_employee = (struct Employee*)malloc(sizeof(struct Employee));
    if (new_employee == NULL) {
        return NULL; // Out of memory
    }
    new_employee->name = name;
    new_employee->id = id;
    return new_employee;
}

int main() {

    return 0;
}