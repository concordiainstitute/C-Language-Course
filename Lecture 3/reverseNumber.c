#include <stdio.h>

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int x=n;

    int r=0;

    while(n>0){

        int lastDigit=n%10;
        r=r+lastDigit;
        r=r*10;
        n=n/10;
      
    }

    r=r/10;

    printf("%d",x+r);


    return 0;
}