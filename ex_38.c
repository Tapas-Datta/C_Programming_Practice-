#include <stdio.h>

int main () {
    int number;
    int i;
    int positive = 0;
    int negative = 0;
    int zero = 0;
    int total = 0;

    printf("Enter how many number you want to add in your array: ");
    scanf("%d", &number);

    int numbers[number];

    for (i = 0; i < number; i++) {
        printf("Enter the number serially: ");
        scanf("%d", &numbers[i]);

        total += numbers[i];

        if (numbers[i] > 0) {
            positive += 1;
        }
        if (numbers[i] < 0) {
            negative += 1;
        }
        if (numbers[i] == 0) {
            zero += 1;
        }
    }

    printf("Your all number are\n");

    for (i = 0; i < number; i++) {
        printf("your number is %d\n", numbers[i]);
    }

    int highest = numbers[0];
    int lowest = numbers[0];

    for (i = 1; i < number; i++) {
        if (numbers[i] > highest) {
            highest = numbers[i];
        }
        if (numbers[i] < lowest) {
            lowest = numbers[i];
        }
    }

    printf("total positive number is %d\n", positive);
    printf("total negative is: %d\n", negative);
    printf("total zero is: %d\n", zero);
    printf("total sum is: %d\n", total);
    printf("the highest number is: %d\n", highest);
    printf("the lowest number is: %d\n", lowest);

    return 0;
}