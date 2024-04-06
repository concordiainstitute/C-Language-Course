#include <stdio.h>

#include <string.h>
int main(){

    struct book
    {
        int price;

        int noPage;

        char writer[70];
    };

    struct book constitution;

    constitution.price=399;

    constitution.noPage=800;
 strcpy(constitution.writer, "William Sexpier");


 printf("%s",constitution.writer);
    




    return 0;
}