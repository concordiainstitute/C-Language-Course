#include <stdio.h>

int main(){
    
   int l;
   int b;
   
   printf("Enter the length: ");
   
   scanf("%d",&l);
   
   printf("Enter the breadth: ");
   
   scanf("%d",&b);
   
   int area=l*b;
   
   int perimeter=2*(l+b);
   
   if(area>perimeter){
       printf("Area is greater");
   }
   else{
       
       printf("Perimeter is greater");
   }
   
    return 0;
}