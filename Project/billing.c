#include <stdio.h>


int main(){


    printf("\n\n\n********************Billing Software********************\n\n");

    int n;

    printf("Enter the number of items: ");
    scanf("%d",&n);

    int prices[n];
    int total=0;

  for(int i=1;i<=n;i++){
      char item[20];
    printf("Enter the name of item: ");
    scanf("%s",&item);

    int price;
    printf("Enter the price: ");
    scanf("%d",&price);

    printf("\n\n");

    prices[i]=price;

  }
printf("Product******************Price\n\n");

  for(int i=1;i<=n;i++){

    

printf("%d***************************%d\n\n",i,prices[i]);
total=total+=prices[i];

  }

printf("Total***********************%d\n\n\n",total);

printf("*******************Thanks for using********************");

    return 0;
}

