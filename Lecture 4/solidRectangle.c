#include <stdio.h>

int main(){

    int row;
    int column;


    printf("Enter the number of rows: ");
    scanf("%d",&row);

    printf("Enter the number of columns: ");
    scanf("%d",&column);


    for(int i=1;i<=row;i++){

        for( int j=1;j<=column;j++){

            printf("*");
        }

        printf("\n");
    }
}