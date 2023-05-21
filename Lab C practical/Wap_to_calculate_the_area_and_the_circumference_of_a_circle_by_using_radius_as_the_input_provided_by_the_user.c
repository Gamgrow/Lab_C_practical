#include <stdio.h>

int main()
{

    float r;
    printf("Enter radius : ");
    scanf("%f", &r);

    // the formula of area of circle is πr*r
    float area = 3.14 * (r * r);

    // the formula of circumference of circle 2πr
    float circumference = 2 * (3.14) * r;

    printf("The area of circle is %f\n", area);
    printf("The circumference of circle is %f", circumference);

    return 0;
}