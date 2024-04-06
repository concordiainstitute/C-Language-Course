#include <stdio.h>

int main(){

//Double pointer is used to store the address of the another pointer

//Let's use it effeciently to make the programmes 


int a=10;

int* address=&a;

int** baap=&address;

printf("%p\n",address);

printf("%p",baap);



    return 0;
}