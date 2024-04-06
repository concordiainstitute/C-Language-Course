#include <stdio.h>

int swap(int* x,int* y){

    int* temp;

    temp=*y;
    *y=*x;
    *x=temp;

    return 0;

}


int main(){

    int a;

    int b;

    printf("Enter the value of a : ");

    scanf("%d",&a);

    printf("Enter the value of b : ");

    scanf("%d",&b);

    swap(&a,&b);

    printf("The value of a is : %d\n",a);

    printf("The value of b is : %d",b);



    return 0;
}