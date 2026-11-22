#include <stdio.h>
int main () {
    int numbers;
    int i ;
    int num;
    int positive_num = 0;
    int negative_count = 0;
    int total = 0 ;
    int zero_count = 0;
    double average;
    printf("how many numbers do you want to add? ");
    scanf("%d",&numbers);
    if (numbers <= 0 ){
        printf("your did invalid input");
        return 0 ;
    }
    for (i = 1 ; i <= numbers; i++) {
       printf("enter the number serially: ");
       scanf("%d",&num);
       total += num;
       if (num > 0) {
          positive_num +=1;;
        }
        if (num < 0){
           negative_count +=1; 
        }
        if (num == 0) {
            zero_count += 1;
        }
    }
    average = (double) total / numbers;
    printf("total negative number is: %d\n", negative_count);
    printf("total positive number is: %d\n",positive_num);
    printf("Total zeros: %d\n", zero_count);
    printf("the total sum is: %d\n",total);
    printf("the average is: %.2f",average);

    return 0 ;
}