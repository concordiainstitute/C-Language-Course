#include <stdio.h>

int main(){

    char str[1000];

    int i;

    printf("Enter the string: ");

    scanf("%s",&str);



    for(i=0;str[i]!='\0';i++);

    printf("The length of string is: %d",i);




    return 0;
}