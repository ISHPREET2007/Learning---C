// switch case
#include <stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("You entered number one.");
        break;
    case 2:
        printf("You entered number two.");
        break;
    default:
        printf("You entered just u entered.");
        break;
    }
    // if not break written in code then like if i enter 1 the below statements  that you entered number two and you entered just u entered will both be executed along with that of case 1. 
    return 0;
}