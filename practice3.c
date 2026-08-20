#include<stdio.h>
int main(){
    float income;
    printf("Enter the income in lakhs:");
    scanf("%f",&income);
    if (income<= 2.5)
    printf("You will have to pay 0 percent tax");
    if (income< 5.0 && income>=2.5)
    printf("You will have to pay 5 percent tax");
    if (income< 10.0 && income>=5.0)
    printf("You will have to pay 20 percent tax");
    if (income>= 10.0)
    printf("You will have to pay 30 percent tax");

    
    return 0;}