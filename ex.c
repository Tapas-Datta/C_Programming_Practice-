

# include <stdio.h>
# include <stdbool.h>
int main () {
    int value = 10;
    int value2 = 20;
    int sum = value + value2;
    printf("the sum of the product is %d\n",sum);
    printf("the sum of the product is %d\n",value > value2);
    return 0; 
}

# include <stdio.h>
int main() {
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("You are an adult.\n");
    else
        printf("You are not an adult.\n");
    return 0;
}

#include <stdio.h>
int main () {
    int age;
    printf("please enter the numebr: ");
    scanf("%d",&age);
    if (age>18)
        printf("you are nnadult");
    else
        printf("you are not dxadult");
    return 0;
}

#include <stdio.h>
int main() {
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    if (number >4)
        if (number <10)
            printf("The number is between 5 and 9.\n");
        else
            printf("The number is greater than or equal to 10.\n");
    else
        printf("The number is less than or equal to 4.\n");
    return 0;
}   

age: integer;
height in metres: floating-point value;
first initial: character.

 # include <stdio.h>
 int main() {
    int age = 20;
    float height = 23.40;
    char name[]= "Tapas";
    printf("Age%d\n", age);
    printf("Height %f \n", height);
    printf("Name %s\n", name);
    return 0;
 }
#include <stdio.h>
int main () {
    float height;
    float weidth;
    printf("Please enter your height in cm: ");
    scanf("%f",&height);
    printf("please enter your weidth ");
    scanf("%f", &weidth);
    float area = height * weidth;
    float perimeter = 2 * (height + weidth);
    printf("the area of the rectangular is %f\n",area);
    printf("the perimeter of the rectangular is %f\n",perimeter);
    return 0;
}
# include <stdio.h>
int main () {
    int seconds;
    printf("Please enter the number of seconds: ");
    scanf("%d", &seconds);
    int hours  = seconds / 3600;
    int minutes_remaining = (seconds % 3600 )/ 60;
    int second_remaining = (seconds % 60);
    printf("Hours: %d \n",hours);
    printf("Minutes: %d \n",minutes_remaining);
    printf("Seconds: %d \n",second_remaining);
}



#include <stdio.h>

int main() {
    int temperature1, temperature2, temperature3;

    printf("Please enter first temperature: ");
    scanf("%d", &temperature1);
    printf("Please enter second temperature: ");
    scanf("%d", &temperature2);
    printf("Please enter third temperature: ");
    scanf("%d", &temperature3);
    int sum = temperature1 + temperature2 + temperature3;
    float average = sum / 3.0;
    float fahrenheit_temperature = (average * 9.0 / 5.0) + 32;
    printf("The sum of the temperatures is: %d\n", sum);
    printf("The average of the temperatures is: %.2f\n", average);
    printf("The Fahrenheit conversion of the average is: %.2f\n", fahrenheit_temperature);
    return 0;
}


# include <stdio.h>
int main () {
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number ==0)
       printf("The number is ZERO");
    else if (number >0)
       printf("The number is positive");
    else
       printf("The number is negative");
       return 0;
}


# include <stdio.h>
int main () {
    int number;
    printf("Enter the number to check it:");
    scanf("%d", &number);
    if (number % 2 == 0)
       printf("the number is even %d",number);
    else 
    printf("the number is odd %d",number);
    return 0;

}



#include <stdio.h>
int main () {
    int grade;
    printf("Enter your marks to check your grade: ");
    scanf("%d",&grade);
    if ( 0 <= grade && grade <= 17)
       printf("Your grade is Fail");
    else if (18<= grade && grade <= 21)
       printf("your grade is suffice");
    else if (22 <= grade && grade <= 24)
       printf("your grade is good");
    else if (25 <= grade && grade <= 27)
       printf("your grade is very good");
    else if ( 28<= grade && grade <=30)
       printf("your result is excellent");
    else
       printf("your result is rejected");
    return 0;

}

#include <stdio.h>
int main () {
    int a ;
    int b;
    char operator;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    if (operator == '+')
       printf("the sum of that number is %d", (a + b));
    else if (operator == '-')
       printf("the subtraction of that number is %d",(a - b));
    else if (operator == '*')
       printf("the multiplication of that number is %d",(a * b));
    else if (operator == '/') {
         if (b != 0)
            printf("the division of the number is: %.2f", (double) a / b);
        else
            printf("division by zero is not allowed");
    }
    else 
       printf("The operator is unknown");

       return 0 ;        
       
}



# include <stdio.h>
int main () {
    int n;
    int number;
    printf("Enter the number to see the loop");
    scanf("%d", &n);
    for (number = n; number >=1; number-- )
       printf("The loop is %d\n", number);
    return 0;
}
Compute 1 + 2 + ... + N using a loop and an accumulator. Explain what happens if the accumulator is not initialized.


# include <stdio.h>
int main () {
    int n;
    int number;
    int total = 0;
    printf("Enter the number");
    scanf("%d", &n);
    for ( number = n ; number >=1; number-- )
       (total= total + number);
    printf("The loop is %d\n ",total);
    return 0 ;

}


# include <stdio.h>
int main () {
    int number;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (number = 1 ; number <=10; number++ ) 
    printf("%d x %d = %d\n ", n,number,n * number);
    return 0;
}

