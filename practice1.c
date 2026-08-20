// here we will do some practice
#include<stdio.h>
int main(){
    int a=10;
    if (a=11) 
    printf("I am 11");//if we have 1 line under if we can avoid using curly braces.
    else
    printf("I am not 11");// for multilines we use curly braces.
    return 0;
}
// here the ouptput is " I am 11 "because used"=" instead of "==".It is like a=11,non zero and its true so statement is executed.