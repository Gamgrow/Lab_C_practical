#include <stdio.h> /* This command is a preprocessor directive in C that includes
                      all standard input-output files before compiling any C 
                      program so as to make use of all those functions in our C program.t
                    */

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n); // --> input
    printf("%d", n); // --> output

    return 0;
}