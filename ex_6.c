// #include <stdio.h>
// int main () {
//     int number;
//     printf("Enter the number: ");
//     scanf("%d", &number);
//     if (10 <= number && number <= 20)
//        printf("That number is inside");
//     else
//        printf("this numberr in outside");

//     return 0 ;
// }

// # include  <stdio.h>
// int main () {
//    int number;
//    printf("Enter your number");
//    scanf("%d",& number);
//    if ( 0 <= number && number <18 )
//       printf("your are failled");
//    else if (18<= number && number <22)
//       printf("your number is sufiicent");
//    else if (number >= 22 && number <25)
//       printf("you are good");
//    else if (number >=25 && number < 28)
//       printf("you are veryu good");
//    else if (28<= number && number <=30)
//       printf("you are excellent");
//    else 
//       printf("that valus is outise");
//    return 0;
// }


// #include<stdio.h>
// int main () {
//    int a;
//    int b;
//    char operator;
//    double result;
   
//    printf("Enter the number\n");
//    scanf("%d",&a);
//    printf("Enter the operator\n");
//    scanf(" %c",&operator);
//    printf("Enter third number\n");
//    scanf("%d",&b);
//    if (operator == '+')
//       result = a + b;

//    else if (operator == '-')
//       result = a - b;
   
//    else if (operator == '*')
//       result = a * b;

//    else if (operator == '/') {
//       if ( b !=0 )
//          result = a/b;
//       else
//          printf("that result is not possible ");
//          return 0;
//    }

//    else {
//       printf("that unknown operator");
//       return 0;
//    }
   
//    printf("the result is%.2f",result);
//    return 0 ;

// }
// Exercise 6 - Count from 1 to N
// Read a positive integer N and print the integers from 1 to N using a for loop. Extension: print them in reverse order.


// # include <stdio.h>
// int main () {
//    int number;
//    int i;
//    int total = 0;
//    printf("Enter the number: ");
//    scanf("%d",&number);
//    for (i = 1; i <=number; i++)
//       total += i;
//       printf("the number sum that %d", total);
//    return 0 ;

// }

// #include <stdio.h>
// int main() {
//    int number;
//    int i;

//    printf("Enter the number: ");
//    scanf("%d",&number);
//    for (i = 1; i <= 10 ; i++)

//       printf("%d * %d = %d\n", i,number,i*number);
//    return 0;
// }

// # include <stdio.h>
// int main () {
//    int  number;
//    printf("Enter the number");
//    scanf("%d",&number);
//    while (number <= 0) {
//       printf("That number is not valid: ");
//       scanf("%d",&number); 
//    }
//    if (number > 0)
//       printf("That number is positive: ");
//    return 0;
// }


#include <stdio.h>
int main () {
   int number;
   printf("Enter the number: ");
   scanf("%d",&number);

   while (number >= 2 ) {
      if (number %2 == 0)
         printf("That number is not prime: ");
         scanf("%d",&number);   
      }
   if (number % 2 != 0) 
      printf("That number is prime");
   return 0; 
}

