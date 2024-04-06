#include <stdio.h>

int main()
{
    int x;
    printf("Enter the number");
    
    scanf("%d",&x);
    
    if(x%3==0 || x%5==0){
        
        if(x%15!=0){
            
            printf("It is divisible by 5 or 3 but not by 15");
        }
        else{
            
            printf("Not satisfy the condition");
        }
    }
    else{
         printf("Not satisfy the condition");
    }

    return 0;
}