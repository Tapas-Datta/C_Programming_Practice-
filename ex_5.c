// # include <stdio.h>
// int main () {
//     double temperatuer_1;
//     double temperatuer_2;
//     double temperatuer_3;
//     double total;
//     double average_farh;
//     double average;
//     printf("Enter the temprature: ");
//     scanf("%lf",&temperatuer_1);
//     printf("Enter the second temperatuer: ");
//     scanf("%lf",&temperatuer_2);
//     printf("Enter the third temperatuer: ");
//     scanf("%lf",&temperatuer_3);
//     total = (temperatuer_1 + temperatuer_2 + temperatuer_3) ;
//     average = total /3;
//     average_farh = (((average * 9 )/ 5 )+ 32);

//     printf("The first temperatuer is: %f\n",temperatuer_1);
//     printf("The second temperatuer is: %f\n",temperatuer_2);
//     printf("The third temperatuer is: %f\n",temperatuer_3);
//     printf("The total of the temperatuer is %f\n",total);
//     printf("The average of the temperatuer is:%.2f\n", average);
//     printf("The average of the farhenit temperatuer is:%.2f\n", average_farh);

//     return 0;
// }


// # include <stdio.h>
// int main () {
//     int number;
//     printf("Enter the number: ");
//     scanf("%d",&number);
//     if (number > 0)
//        printf("The number is positive");
//     else if (number < 0)
//        printf("that number is negative ");
//     else
//        printf("The number is zero");
//     return 0;   

// }


#include <stdio.h>
int main () {
    int number ;
    printf("Enter the number to check it: ");
    scanf("%d",&number);
    if (number % 2 == 0)
       printf("that number is even\n");
    else 
       printf("The number is odd\n");
    if (number %5==0)
       printf("The numbner is devisible by 5\n ");
    else
       printf("The numbner is not devisible by 5\n ");
    
       return 0;
}