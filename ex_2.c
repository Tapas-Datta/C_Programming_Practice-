# include <stdio.h>
int main () {
    char operator;
    float number_1;
    float number_2;
    printf("Enter the operator to do:");
    scanf("%c",&operator );
    printf("enter the 1st number to do it: ");
    scanf("%f", & number_1);
    printf("enter the 2nd number to do it:");
    scanf("%f", &number_2);
    if (operator == '+')
       printf("the sum of that number is %f",number_1 + number_2);
    else if  (operator == '-')
       printf("the subtraction of that number is %f",number_1 - number_2);
    else if (operator == '*')
        printf("the multiple of that number is %f",number_1 * number_2);
    else if (operator == '/')
        printf("the division of that number is %f",number_1 / number_2);
    else
       printf("The number is not operator");
    
    return 0;

}

# include <stdio.h>
int main() {
    int number;
    int number_1;
    printf("Enter the number to see the miltification");
    scanf("%d",& number);
    for(number_1 = 1;number_1 <=10;number_1++)
       printf("%d x %d = %d\n",number,number_1,number * number_1);
    return 0;

}

# include <stdio.h>
int main () {
    int number ;
    int total =0;
    int i ;
    printf("enter the numer to see the calculation");
    scanf("%d",&number);
    printf("the number of that; %d",number);
    for (i = 1; i <= number; i++)
    total = total + i;
    printf("the sum of that number is %d",total);

    return 0;
}

# include <stdio.h>
int main () {
    int number;
    int i;
    printf("Enter the number to see: ");
    scanf("%d",&number);
    for (i = 1; i <= number; i++)
    printf("the number of that %d\n",i);
    return 0;

}

# include <stdio.h>
int main () {
    int number;
    int i;
    printf("put the number to check it: ");
    scanf("%d",&number);
    for (i =1; i <=number; i++)
    if (i % 2 == 0 )
       printf("that number is even %d\n:", i);
    else
       printf("The number is an odd%d\n:", i);
    return 0;

}

# include <stdio.h>
int main () {
    int number;
    int i ;
    int count = 0;
    int count_1= 0;
    printf("Enter the last number to check it");
    scanf("%d" ,&number);
    for (i = 1 ; i <= number; i++)
    if (i %2 == 0 )
    count +=1; 
    else 
    count_1 += 1;
    printf("the total even number is: %d\n ",count);
    printf("the odd number is: %d\n",count_1);

    return 0;
}
# include<stdio.h>
int main () {
    int number ;
    int i;

    
    printf("enter the number: ");
    scanf("%d", &number);
    for (  i = number; i>=1 ; i--)
    printf("the reverse number is: %d\n",i);
    return 0;
}

# include <stdio.h>
int main () {
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    while (number >= 1)
    printf("the reverse of that number is: %d\n", number--);
    return 0;
}
