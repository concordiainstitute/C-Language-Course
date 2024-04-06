#include <stdio.h>


int path(int n){

    if(n<=2) return n;

    int recAns=path(n-1)+path(n-2);

    return recAns;
}


int main(){


int n;

printf("Enter the number: ");

scanf("%d",&n);


int result=path(n);

printf("%d",result);




    return 0;
}