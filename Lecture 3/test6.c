#include <stdio.h>


int main(){

    printf("Enter the number of terms: ");
    int n;
    scanf("%d",&n);

    int a=1;

    for(int i=1;i<=n;i++){

        printf("%d\n",a);
        a=a*2;
    }



    return 0;
}