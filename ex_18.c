#include <stdio.h>
int main () {
    int numbers;
    int i;
    int largest;

    printf("How many numbers do you want to enter: ");
    scanf("%d",&numbers);

    if (numbers <= 0) {
        printf("Invalid input");
        return 0;
    }

    int num[numbers];

    for (i = 0; i < numbers; i++) {
        printf("Enter number %d: ",i + 1);
        scanf("%d",&num[i]);
    }

    largest = num[0];

    for (i = 1; i < numbers; i++) {
        if (num[i] > largest) {
            largest = num[i];
        }
    }

    printf("The largest number is: %d",largest);

    return 0;
}



#include <stdio.h>
int main () {
    int numbers[5];
    int i;
    for (i = 0; i < 5; i++){
        printf("enter the number: ");
        scanf("%d",&numbers[i]);
    } 
    for (i = 0; i < 5; i++) {
    printf("%d\n", numbers[i]);
}
    return 0 ;
}
