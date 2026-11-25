# include <stdio.h>
int main () {
    int number;
    int i;
    int k;
    int found = 0;

    printf("Enter how many num you want to add in the array: ");
    scanf("%d",&number);

    int j[number];

    for (i = 0; i < number; i++) {
        printf("enter your number serially: ");
        scanf("%d",&j[i]);
    }

    printf("which number are you looking for: ");
    scanf("%d",&k);

    for (i = 0; i < number; i++) {
        if (k == j[i]) {
            printf("The number is found");
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("The number is not found");
    }

    return 0;
}