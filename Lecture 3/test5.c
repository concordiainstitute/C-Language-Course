
//Ques:Display this AP 4,7,10,13,16 UPTO YHE N TERMS


#include <stdio.h>


int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=4;i<=3*n+1;i+=3){

        printf("%d\n",i);
    }



    return 0;
}