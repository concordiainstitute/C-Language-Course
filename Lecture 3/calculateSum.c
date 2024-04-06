#include <stdio.h>

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int sum=0;

    while(n!=0){

        int lastDigit=n%10;
       if(lastDigit%2==0){
        sum=sum+lastDigit;
       }
        n=n/10;
    }

    printf("%d",sum);


    return 0;
}