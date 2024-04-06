#include <stdio.h>

//Function for factorial using recursion

int factorial(int n){

    if(n==1 || n==0) return 1;//Base case which saves programme from segmentation fault
    return n*factorial(n-1);
}

int main(){


int n;

printf("Enter the number: ");

scanf("%d",&n);

int fact=factorial(n);

printf("%d",fact);




    return 0;
}