#include<stdio.h>
int main(){
    // we have three  &&,|| and ! which are and,or and not respectively.
    int a=1,b=0;
    if (a &&b){
        printf("this is true \n");

    }
    else{
        printf("this is false");
    }
    //here it is like 0 and 1, this will be false so instead of if statement else statement will be executed.
    return 0;
}