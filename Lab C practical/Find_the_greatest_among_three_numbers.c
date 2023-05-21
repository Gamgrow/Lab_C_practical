// (a) Conditional Operator
// (b) if-else statement
#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter third number : ");
    scanf("%d", &c);

    printf("(a) Conditional Operator\n");
    int max;
    max = (a > b && a > c ? a : b > c ? b
                                      : c);

    printf("The greatest is %d\n", max);

    printf("(b) if-else statement\n");
    if (a > b)
    {
        if (a > c)
        {
            printf("The greatest is %d", a);
        }
        else
        {
            printf("The greatest is %d", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("The greatest is %d", b);
        }
        else
        {
            printf("The greatest is %d", c);
        }
    }

    return 0;
}