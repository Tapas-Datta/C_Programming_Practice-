#include <stdio.h>
int main () {
    int balance = 1000;
    int transaction ;
    int i;
    int input ;
    int deposit;
    int withdraw;
    int total_deposit = 0;
    int total_withdraw = 0 ;
    int succesful = 0;
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
            total_deposit += deposit;
            succesful += 1;
            printf("You deposit%d\ntotal balance now%d\n",deposit,balance);
        }
        else if (input == 2){
            printf("how much you want to withdraw: ");
            scanf("%d",&withdraw);
            if (withdraw >balance){
                printf("you have not enough balance");
            }
            else if (withdraw <= 0){
                printf("Negative is not possible");
                break;
            }
            else {
                balance -= withdraw;
                total_withdraw += withdraw;
                succesful +=1;
                printf("your total withdrawl is%d\ntotal balance is\n%d",withdraw,balance);
            }
        }
        else if (input == 3){
            printf("thank you");
            break;
        }
        
    }
    printf("Total balance is:%d\n",balance);
    printf("total deposit is:%d\n",total_deposit);
    printf("total withdraw is%d\n",total_withdraw);
    printf("Successful Transction%d",succesful);
    return 0 ;

}