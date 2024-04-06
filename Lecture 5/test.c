#include <stdio.h>

int fact(int x){
int fact=1;
for(int i=1;i<=x;i++){
    fact=fact*i;

}
return fact;

}

int main(){


int facto=fact(5);

printf("%d",facto);



    return 0;
}