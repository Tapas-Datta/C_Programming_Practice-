// Problem 16: ATM Withdrawal System
# include <stdio.h>
int main () {
    double balance = 10000;
    double amount;
    while (balance > 0) {
    printf("how much do you want to withdraw");
    scanf ("%lf",&amount);
    if ( amount <= 0){
       printf("Invalid amount");
    }
    else if (amount <= balance){
       balance -= amount;
        printf("Your withdrawal amount is %.2f\n",amount);
        printf("Your remaining amount is %.2f\n",balance);
    }
    else if (amount > balance){
        printf("Insufficent amount ");
    }
}
    printf("\nYour balance is zero. ATM session ended.\n");
return 0 ;
}