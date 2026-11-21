// Electricity Bill Calculator

# include <stdio.h>
int main () {
    int unit;
    int number;
    double price;
    printf("unit can not be negative or zero\n");
    printf("Enter the number to calculate your bill: ");
    scanf("%d",&unit);
    if (unit <= 0 ){
        printf("Enter your unit again: " );
        scanf("%d",&unit);
       
    }
        if (unit <= 100){
          price  = unit * 0.10 ;
          printf("your bills is: %.2ff",price);

       }
       else if (100 < unit && 200 >= unit){
          price = (100 * 0.10) + ((unit - 100) * 0.15);
          printf("your bills is: %.2f",price);
         }
       else if (unit > 200){
          price = (100 * 0.10) + (100 *0.15) + ((unit -200) *0.20 );
          printf("your bills is: %.2ff",price);

        }
    return 0 ;      
}