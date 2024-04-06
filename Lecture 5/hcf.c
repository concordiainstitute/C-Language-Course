#include <stdio.h>

int min(int x,int y){

    if(x<y) return x;
    else return y;
}


int main(){

    int a;

    int b;

    printf("Enter the value of a : ");
    scanf("%d",&a);


    printf("Enter the value of b : ");
    scanf("%d",&b);

    int hcf;

    for(int i=min(a,b);i>0;i--){

       if(a%i==0 && b%i==0){

        hcf=i;
        break;

       }

    }

    printf("%d",hcf);



    return 0;
}