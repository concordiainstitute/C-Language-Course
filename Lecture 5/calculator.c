#include <stdio.h>

int add(int x,int y){

    return x+y;


}
int subtract(int x,int y){
     return x-y;
    
}
int multiply(int x,int y){

     return x*y;
    
}
int divide(int x,int y){

     return x/y;
    
}

int main()
{

    printf("***********************************************Welcome to the Calculator Algorithm*******************************************\n\n\n");

    printf("Press 1 for add,2 for subtract,3 for multiply,4 for divide: ");

    int inp;

    scanf("%d", &inp);

    int a;
    int b;

    printf("Enter the value of a: ");

    scanf("%d", &a);

    printf("Enter the value of b: ");

    scanf("%d", &b);

    if (inp == 1)
    {
 
        int result1 = add(a, b);
        printf("%d", result1);
    }
    else if (inp == 2)
    {

        int result1 = subtract(a, b);
        printf("%d", result1);
    }

    else if (inp == 3)
    {

        int result1 = multiply(a, b);
        printf("%d", result1);
    }

    else if (inp == 4)
    {

        int result1 = divide(a, b);
        printf("%d", result1);
    }

    return 0;
}