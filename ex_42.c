# include <stdio.h>
    int withdraw(int balance, int amount) {
        if ( amount <= 0 || amount > balance){
        return balance;
        }
        else {
        return  balance - amount;
        }

    }
    int main(void) {
    int current_balance = 5000;
    printf("Withdraw 1200 -> New balance: %d\n", withdraw(current_balance, 1200)); // 3800
    printf("Withdraw 0    -> Balance: %d\n", withdraw(current_balance, 0));    // 5000
    printf("Withdraw -50  -> Balance: %d\n", withdraw(current_balance, -50));  // 5000
    printf("Withdraw 6000 -> Balance: %d\n", withdraw(current_balance, 6000)); // 5000

    return 0;
}