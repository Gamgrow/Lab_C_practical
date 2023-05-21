// Q 1. V=u+at
// Q 2. S=ut+1/2at*t
// Q 3. T=2*a+√b+9c
// Q 4. H=√b2 +p*p

#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c;
    a = 3.2;
    b = 5.0;
    c = 2.2;

    double u, p;
    int t;
    u = 0;
    t = 10;
    p = 5;

    // calculation
    double V = u + (a * t);

    double S = (u * t) + ((float)1 / 2) * a * (t * t);

    double T = 2 * a + sqrt(b) + 9 * c;

    double H = sqrt(b) * sqrt(b) + p * p;

    printf("V = %lf\n", V);
    printf("S = %lf\n", S);
    printf("T = %lf\n", T);
    printf("H = %lf", H);

    return 0;
}
