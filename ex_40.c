#include <stdio.h>
int main () {
    int balance = 1000;
    int transaction ;
    int i;
    int input ;
    int deposit;
    int withdraw;
    printf("How many transaction do you want: ");
    scanf("%d",&transaction);
    for (i =1 ; i<= transaction; i++ ){
        printf("do you want deposit press 1\n");   
        printf("do you want withdraw press 2\n");
        printf("do you want to exit press 3\n");
        printf("Enter your choice: ");
        scanf("%d",&input);
        if (input == 1){
            printf("How much you want to deposit: ");
            scanf("%d",&deposit);
            balance += deposit;
            printf("You deposit%d\ntotal balance now%d\n",deposit,balance);
        }
        else if (input == 2){
            printf("how much you want to withdraw: ");
            scanf("%d",&withdraw);
            if (withdraw >balance){
                printf("you have not enough balance");
            }
            else {
                balance -= withdraw;
                printf("your total withdrawl is%d\ntotal balance is\n%d",withdraw,balance);
            }
        }
        else if (input == 3){
            printf("thank you");
            return 0;
        }
        
    }
    printf("Total balance is:%d\n",balance);
    printf("total deposit is:%d\n",deposit);
    printf("total withdraw is%d\n",withdraw);
    return 0 ;

}