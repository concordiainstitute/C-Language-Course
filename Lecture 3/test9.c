//Question:Display this GP-100,50,25,.........upto 'n' terms;


#include <stdio.h>


int main(){
    float a=100;
    float n;
    printf("Enter the number of terms");

    scanf("%f",&n);

    for(int i=1;i<=n;i++){

        printf("%f\n",a);
        a=a/2;
    }



    return 0;
}


//LOOP KE ANDAR JO BHI LINE DAALE
//WO SAB REPEAT HOTA HAI!!

/*

for(){

    line 1;
    line 2;
    line 3;
    line 4;



}


*/