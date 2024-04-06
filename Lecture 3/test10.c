//WAP TO CHECK IF THE GIVEN NUMBER IS PRIME OR NOT

#include <stdio.h>


int main(){

    int n;

    printf("Enter the numbers");
    scanf("%d",&n);

    int a=0;

    for(int i=2;i<n;i++){
        if(n%i==0){

            a=1;
            break;

        }

     
    }
       if(n==0){
            printf("The entered number is not prime nor compositie");

        }
        else if(a==0){

            printf("It is the prime number");

        }
        else{
            printf("It is the composite number");
        }
    



    return 0;
}