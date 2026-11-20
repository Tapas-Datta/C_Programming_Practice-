#include <stdio.h>
int main () {
    int balance = 10000;
    int option;
    int amount;
    int withdraw_amount;

    while (1) {
        printf("\nYour initial balance is: %d\n",balance);
        printf("Do you want to see your balance press 1:\n");
        printf("Do you want to deposit money press 2:\n");
        printf("Do you want to withdraw the money press 3:\n");
        printf("Do you want to exit press 4:\n");

        printf("Enter your option: ");
        scanf("%d",&option);
        if (option == 1) {
            printf("Your balance is: %d\n",balance);
        }
       else if ( option ==2){
          printf("Enter how much money do you want to deposit: ");
          scanf("%d",&amount);
          balance += amount;
          printf("your deposit amount is %d\nyou total balance is %d",amount,balance);
       }
       else if (option == 3) {
          printf("Enter how much do you want to withdraw");
          scanf("%d",&withdraw_amount);
          if (withdraw_amount <= balance && withdraw_amount > 0) {
             balance -= withdraw_amount;
             printf("Your withdraw amount is %d\nyou total balance is till now %d",withdraw_amount,balance);
          }
          else {
             printf("your withdraw amount is more than your balance\n");
          }
       }
       else if (option == 4){
          printf("thank you for using our program");
          break;
        }
       else {
            printf("Invalid option\n");
        }
    }

    return 0;
}