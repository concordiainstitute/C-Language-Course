#include <stdio.h>

int decreasing(int n){

    if(n==0) return;//Base Case to stop the recursion of to avoid the segmentation fault
    

    printf("%d\n",n);
    
    return decreasing(n-1);
}

int main(){


    int n;

    printf("Enter the number: ");

    scanf("%d",&n);


    int dec=decreasing(n);
    



    return 0;
}