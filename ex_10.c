// #include <stdio.h>
// int main () {
//     int number;
//     int i;
//     int j;
//     int total = 0;
//     double average;
//     printf("Enter how many number you want to do the calculation: ");
//     scanf("%d",&number);
//     for ( i = 1; i <= number ; i++) {
//        printf("Enter the number one by one: ");
//        scanf("%d",&j);
//        total += j;
//     }
//     average = (double) total / number;
//     printf("the sum  of the number is:%d\n ",total);
//     printf("The average of the sum is:%.2f ",average);
//     return 0 ;
// }




// #include <stdio.h>
// int main () {
//     int number;
//     int i;
//     int j;
//     int positive_numbers = 0;
//     int negative_numbers = 0;
//     int zeros = 0;
//     printf("How many numbers do you want to enter? ");
//     scanf("%d",&number);
//     for( i = 1 ; i <= number ; i++) {
//        printf("Enter the number all: ");
//        scanf("%d",&j);
//        if ( j > 0)
//           positive_numbers +=1;
//        if (j <0)
//           negative_numbers +=1;
//        if ( j == 0)
//           zeros += 1;
//     }
//     printf("Positive number is: %d\n",positive_numbers);
//     printf("Negative number is: %d\n",negative_numbers);
//     printf("zeros is: %d",zeros);
//     return 0;
// }


// # include <stdio.h>
// int main () {
//     int number;
//     int i;
//     int factorial=1;
//     printf("enter the number for the factorial: ");
//     scanf("%d",&number);
//     for ( i =1 ; i <=number ; i++) {
//        factorial *= i;
//     }
//     printf("the sum of the factorial number is: %d",factorial);
//     return 0 ;

// }

// #include <stdio.h>
// int main () {
//     int number;
//     int remainder;
//     int reversed = 0;

//     printf("Enter a number: ");
//     scanf("%d",&number);

//     while (number > 0) {
//         remainder = number % 10;
//         reversed = reversed * 10 + remainder;
//         number = number / 10;

//     }
//     printf("Reversed number: %d",reversed);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     char word[100];
//     int count = 0;
//     int i;
//     printf("Enter your word: ");
//     scanf("%99s",word);
//     for (i = 0; word[i] != '\0'; i++) {

//         if (word[i] == 'a')
//             count += 1;
//         else if (word[i] == 'e')
//             count += 1;
//         else if (word[i] == 'i')
//             count += 1;
//         else if (word[i] == 'o')
//             count += 1;
//         else if (word[i] == 'u')
//             count += 1;
//     }

//     printf("Total vowels: %d",count);

//     return 0;
// }


# include <stdio.h>
int main () {
    int number ;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d",&number);
    while (number > 0){
    number = number /10; 
    count +=1;
    }
    printf("the total of the number is: %d",count);
    return 0 ;
       

}