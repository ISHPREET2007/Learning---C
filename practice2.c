// using if and else loop
#include <stdio.h>
int main()
{
    int Math, Science, Sst, Total;
    printf("Enter the marks of Math  out of 100");
    scanf("%d", &Math);// here no need to use \n
    printf("Enter the marks of Science out of 100");
    scanf("%d", &Science);// here no need to use \n
    printf("Enter the marks of Sst out of 100");
    scanf("%d", &Sst);// here no need to use \n
    Total = (((Math + Science + Sst) / 300) * 100);
    if (Total >= 40 && Science >= 33 && Sst >= 33 && Math >= 33)
    {
        printf("The student is passed");
    }
    else
        printf("Student got failed");

    return 0;
}