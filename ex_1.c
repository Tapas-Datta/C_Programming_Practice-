# include <stdio.h>
int main () {
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    if ( number %2 == 0)
       printf("The number is even");
    else
       printf("The number is an odd");
    return 0;
}

# include <stdio.h>
int main () {
    int number;
    printf("Enter the number to check");
    scanf("%d", &number);
    if (number > 0)
       printf("The number is positive");
    else if (number < 0)
       printf("The number is Negative");
    else
    printf("The number is zero");
    return 0;
}


# include <stdio.h>
int main () {
    int number_1;
    int number_2;
    int number_3;
    printf("Enter the 1st number to check:");
    scanf("%d", &number_1);
    printf("Enter the second number: ");
    scanf("%d", &number_2);
    printf("Enter the third number: ");
    scanf("%d", &number_3);
    if (number_1 >= number_2 && number_1 >= number_3)
       printf("The biggest number is %d",number_1);
    else if (number_2 >= number_1 && number_2 >= number_3)
       printf("The biggest number is: %d", number_2);
    else
       printf("The biggest number is: %d",number_3);
    return 0;
}


# include <stdio.h>
int main() {
    int grade;
    printf("Enter your marks:");
    scanf("%d",&grade);
    if ( grade >= 80 && grade <= 100)
       printf("you grade is A+");
    else if (grade  >= 70 && grade <= 79)
       printf("your grade is A");
    else if ( grade >=40 && grade <= 69) 
       printf("You got B");
    else
       printf("you fallied now");
    return 0;
}



