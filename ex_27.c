# include <stdio.h>
int main () {
    int balance = 1000;
    int amount;

    while (1){
        printf("How much do you want to withdraw: ");
        scanf("%d",&amount);
        if (amount == 0){
            printf("please,zero is not possible.Thnak you");
            break;
        }
        else if (balance >= amount ) {
        balance -= amount;
        printf("you withdraw is%d\n your updated balance%d\n",amount,balance);
        }
        else if (balance < amount){
            printf("you have not enough balance try again\n: ");
        }
    }
    return 0 ; 
    
}