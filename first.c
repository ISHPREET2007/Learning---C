//This is my first program.
/*I learned about:
 1.printf,scanf 
 2.about int,char,float like data type
 3. Comments*/

#include <stdio.h>
int main(){
    
    int a;
    printf("Enter the value of length of rectangle:\n");
    scanf("%d", & a);
    int b;
    printf("Enter the value of breadth:\n");
    scanf("%d",& b);
    int area;
    area=a*b;
    printf("The area of rectangle is:%d",area);
    return 0;
}