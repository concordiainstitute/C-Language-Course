#include <stdio.h>

int zag(int n){

    if(n==0) return;

    printf("%d",n);

    zag(n-1);

    printf("%d",n);

    zag(n-1);

    printf("%d",n);

   

    return;
}

int main(){

    int n;

    printf("Enter the number: ");

    scanf("%d",&n);

    int zig=zag(n);

    printf("%d",zig);





    return 0;
}