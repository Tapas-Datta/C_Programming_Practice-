# include <stdio.h>
int main () {
    int number ;
    int reversed = 0;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d",&number);
    while (number > 0){
        int digit = number % 10; 
        reversed = reversed * 10 + digit;
        number = number / 10;
        count +=1;
        }
        if (number == reversed){
            printf("that number is palidrome\n");

        }
        else{
            printf("That number is not palidrome\n");
        }
        printf("The reversed is%d\n",reversed);

        printf("total digit isL: %d",count);
        return 0 ;
    }

