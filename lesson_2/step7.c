#include <stdio.h>

/*
    The function fprintf is just like printf, except that instead of printing to the console (“standard output”), 
    it prints to the output FILE* given as first argument.

    The function fscanf is just like scanf, except that instead of reading from the console (“standard inpout”), 
    it reads from the input FILE* given as first argument.
*/

/*
    write a function that takes two filenames as parameters and copies the contents of the file with the first name
    into a file with the second name (creating it if it doesn’t exist, overwriting it if it does exist, both of which 
    are the default behavior of fopen). 
*/

int copy_file(char* srcfilename, char* dstfilename) 
{
    // First we open the src file and enable reading
    FILE* src = fopen(srcfilename, "r");
    if (src == NULL) 
    {
        printf("Error opening source file");
        return 0;
    }

    // Then we open destination file and enable writing
    FILE* dst = fopen(dstfilename, "w");
    if (dst == NULL) 
    {
        printf("Error opening destination file");
        return 0;
    }

    // feof(input_file) returns true if the input file FILE* has been completely read
    while (!feof(src)) 
    {
        char str [256];
        fgets(str, 255, src);
        fprintf(dst, "%s", str);
    }

    fclose(src);
    fclose(dst);
    return 1; // Return 1 meaning success
}

int main() 
{
    // TODO: Test copy_file function
    int copy_file_success = copy_file("xanadu.txt", "dstfile.txt");

    if (copy_file_success == 0) {
        printf("copy_file() finished with following return: %d FAILED\n", copy_file_success);  
    } else {
        printf("copy_file() finished with following return: %d SUCCESS\n", copy_file_success);  
    }
    
    return 0;
}