
#include <stdio.h>

int main()
{
    int x1,y1,x2,y2,x3,y3;
    
    printf("Enter all the three coordinates with gap");
    
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    
    int m1=(y2-y1)/(x2-x1);
    
    int m2=(y3-y2)/(x3-x2);
    
    if(m1==m2){
        
        printf("It lies on the same point");
    }
    else{
         printf("It does not lies on the same point");
    }
   
    
    return 0;
}
