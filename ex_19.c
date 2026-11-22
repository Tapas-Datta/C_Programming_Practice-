# include <stdio.h>
int main () { 
    int numbers[5];
    int i ;
    int total= 0;
    double average;
    for (i = 0 ; i< 5 ; i++){
    printf("Enter the number to see the calculation:");
    scanf("%d",&numbers[i]);
    }
    for (i = 0 ; i< 5 ; i++){
    printf("the aray element is: %d\n", numbers[i]);
    total += numbers[i];
    }

    average =(double) total / 5 ;
    printf("The total sum is: %d\n",total);
    printf("The average is: %.2f",average);
    return 0 ;
}