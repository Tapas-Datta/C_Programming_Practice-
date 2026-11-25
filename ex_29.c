# include<stdio.h>
int main () {
    int number;
    int secret_number = 7;
    int count = 0; 
    while (1){
        printf("Enter the number:");
        scanf("%d",&number);
        count += 1;
        if (secret_number == number){
            printf("your guess is correct\n");
            break;
        }
        else if (number > secret_number){
            printf("your guess is too high\n");
        }
        else if (number < secret_number){
            printf("your guess is too low\n");
        }
    }
    printf("your total try is:%d",count);
    return 0 ;
}