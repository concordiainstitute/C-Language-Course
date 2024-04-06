#include <stdio.h>


int main(){

    int a=3;
    int b=10;

    int c;

    c=b;
    b=a;
    a=c;

    printf("The value of a is : %d\n\n\n",a);


    printf("The value of b is : %d",b);



    return 0;
}