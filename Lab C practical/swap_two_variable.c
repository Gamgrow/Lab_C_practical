// (a) By using temporary variable
// (b) Without using temporary variable
#include <stdio.h>

int main()
{
    printf("(a) By using temporary variable\n");
    int a, b;
    a = 67;
    b = 99;

    int temp = a;
    a = b;
    b = temp;
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("(b) Without using temporary variable\n");
    int x, y;
    x = 34;
    y = 45;

    /*

    x = x + y = 34 + 45 so ---> x=79
    y = 79 - 45 = 34       so ---> y=34
    x = 79 - 34 = 45       so ---> x=45

    now swaped
    x=45
    y=34

    */

    x = x + y;
    y = x - y;
    x = x - y;

    printf("x = %d\n", x);
    printf("y = %d", y);

    return 0;
}