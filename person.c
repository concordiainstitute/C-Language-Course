#include <stdio.h>


#include <string.h>
int main(){

    struct person
    {
        char name[70];

        int salary;


        int age;

    };

    struct person collector;

    strcpy(collector.name,"Vaibhav Mangla");

    struct person peon;

    peon.salary=800000;


    printf("%s\n",collector.name);
    printf("%d",peon.salary);
    



    return 0;
}