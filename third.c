#include <stdio.h>
int main()
{
    int a, b, c, d;
    a = 2, b = 3, c = 4;
    d = 2 * a / 3 * b + 4 * c;
    printf("THE VALUE OF A D IS%d\n", d);
    return 0;
    /* here the expected value of d is 16
    but output is,by operator precedence and associativity:
    calculation:
               4/3*b + 16
               1.33*3+16
               19.99
               but due to int data type demolition occurs we get
               19
    This is how operator precedence occurs.
     */
}