#include <stdio.h>

int main(){


    int x;

    printf("Enter the year");
    scanf("%d",&x);

    if(x%4==0){
        printf("Leap Year");
    }
    else{

        printf("Not a leap year");
    }
    return 0;
}