#include <stdio.h>
int main () {
    int option;
    int a;
    int b;
    printf("1. Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("0. Exit\n");

    while (1){
        printf("Enter the option you want to do: ");
        scanf("%d",&option);
         if (option == 0){
            printf("thank you");
            break;
        } 
        printf("Enter your first number: ");
        scanf("%d",&a);
        printf("Enter your second number: ");
        scanf("%d",&b);
        if (option == 1){
            int sum = a+b;
            printf("total is:%d\n",sum);
        }
        else if (option == 2){
            int subtraction = a - b;
            printf("Your subtraction is:%d\n",subtraction);
        }
        else if (option == 3){
            int Multiplication = a * b;
            printf("your Multiplication is:%d\n",Multiplication);
        }
        else if (option == 4) {
            if (b == 0){
                printf("error\n");
            }
            else{
               double division =(double) a /b;
               printf("the division is:%.2f\n",division);
            }
    }
}
    return 0 ;
}