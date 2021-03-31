//Author- Sankalp Bajaj
//31/March/2021
//Program for showing working of fgets() & puts()

#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: \n");
    fgets(name, sizeof(name), stdin);  // Read(scan) string
    printf("Name: ");
    puts(name);    // Display(print) string
    return 0;
}