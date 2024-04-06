#include <stdio.h>

int hanoi(int n,char s,char h,char d){

    if(n==0) return;

    hanoi(n-1,s,d,h);

    printf("%c------->%c\n",s,d);

    hanoi(n-1,h,s,d);

    return;
}


int main(){



int n;
printf("Enter the number:  ");

scanf("%d",&n);


hanoi(n,'A','B','C');

    return 0;
}