#include <stdio.h>


int main(){

    int marks[5];

    for(int i=0;i<5;i++){

        printf("Enter %d value : ",i+1);
        scanf("%d",&marks[i]);
    }

    for(int j=0;j<5;j++){

        if(marks[j]<=35) printf("%d",j);
    }


    return 0;
}