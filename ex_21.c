// #include <stdio.h>
// int main () {
//     int i;
//     int numbers;

//     printf("Enter how many numbers you want to add in the array: ");
//     scanf("%d",&numbers);

//     if (numbers <= 0) {
//         printf("Invalid input");
//         return 0;
//     }

//     int j[numbers];

//     for (i = 0; i < numbers; i++) {
//         printf("Enter the number: ");
//         scanf("%d",&j[i]);
//     }

//     printf("All your numbers are:\n");

//     for (i = 0; i < numbers; i++) {
//         printf("%d\n",j[i]);
//     }

//     return 0;
// }


# include <stdio.h>
int main () {
    int numbers;
    int i ;
    printf("Enter how many numbers you want to add in your array: ");
    scanf("%d",&numbers);
    int j[numbers];
    for (i = 0; i < numbers; i++) {
        printf("Enter the number serailly: ");
        scanf("%d",&j[i]);
    }
    printf("your number are\n");
    for (i = 0; i < numbers; i++) {
        printf("%d\n",j[i]);
    }
     printf("your reverse number are\n");
for (i = numbers - 1; i >= 0; i--) {
    printf("%d\n",j[i]);
}
    return 0 ;
}