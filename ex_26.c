#include <stdio.h>
int main () {
    int number;
    int i ;
    float price;
    float total = 0 ; 
    float discount;
    float final ;
    printf("Enter how  you want to calculate: ");
    scanf("%d",&number);
    for (i = 1 ; i <= number; i++){
        printf("Enter the your product price serially: ");
        scanf("%f",&price);
        total += price;
    } 
    if (total >= 200 ){
        discount = total * 0.20;
        final = total -  discount ; 
    } 
     else if (total >= 100){
        discount = total * 0.10;
        final = total -  discount;
    } 
    else if (total < 100){
        discount = 0;
        final = total;
    }

    printf("Total Price is:%.2f\n",total);
    printf("Discount is:%.2f\n",discount);
    printf("Final price is:%.2f",final);
    return 0 ;

}