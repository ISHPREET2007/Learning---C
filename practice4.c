// to check charcter in c we use the ascii range.
// next to find greatest of four numbers entered by user.
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a>=b && a>=c && a>=d)
    {
        printf("greatest: %d",a);
    }
    else if ( b>=a && b>=c && b>=d)
    {
        printf("Greatest:%d",b);
    }
    else if (c>=a && c>=b && c>=d)
    {
        printf("Greatest :%d",c);
    }
    else
    printf("Greatest:%d",d);
    return 0;
}