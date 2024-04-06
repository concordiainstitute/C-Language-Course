//Display this GP-3,12,48,............. upto 'n' terms.

#include <stdio.h>


int main(){

    int a=3;
    int n;

    printf("Enter the number of terms: ");

    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        printf("%d\n",a);
        a=a*4;
        
    }    



    return 0;
}