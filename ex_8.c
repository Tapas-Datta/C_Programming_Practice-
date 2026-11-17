
// # include <stdio.h>
// int main () {
//     int number;
//     int i;
//     int maximum;
//     int minimum;
//     for (i = 1; i <= 5; i++) {
//        printf("Enter the number: ");
//        scanf("%d",&number);
//        if (i == 1) {
//           maximum = number;
//           minimum = number;
//        }
//        else if (number > maximum)
//           maximum = number;
//        else if (number < minimum)
//           minimum = number;
//     }
//     printf("The maximum number is: %d\n",maximum);
//     printf("The minimum number is: %d\n",minimum);
//     return 0;
// }



# include <stdio.h>
int main () {
    int number;
    int i ;
    int count = 0;
    int count_1 = 0;

    for (i = 1; i <= 5; i++) {
        printf("Enter the number: ");
        scanf("%d", &number);

        if (number > 0) {
           count += 1;
           printf("the positive number is %d\n", count);
        }
        else if (number < 0) {
           count_1 += 1;
           printf("the negative number is %d\n",count_1);
        }
    }
    printf("The total positive number is %d\n",count);
    printf("The total positive number is %d\n",count_1);

    return 0 ;
}