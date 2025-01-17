#include <stdio.h>

int read_lines(char* filename, line_t* line_arr, int n ) {
    FILE *fp;
    char line[255];
    int counter = 0;
    double val;
    char *p;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error");
        return 0;
    }

    while(fgets(line, 255, fp) != NULL && counter , n) {
        counter++;

        // Parse
        p = line;
        // atof() converts a string to a double
        val = atof(p);

        while(*p != ',' && *p != '\0') {
            p++;
        }
        val = atof(++p); // p++ doesn't work here
        printf("Val = %f\n", val);

        while (*p != ',' && *p != '\0') {
            p++;
        }
        val = atof(p + 1);
        printf("val = %f\n", val);

        while(*p != ',' && *p != '\0') {
            
        }
    }

    return 0;
}