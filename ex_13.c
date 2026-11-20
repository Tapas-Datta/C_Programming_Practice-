#include <stdio.h>
int main (){
    int marks;
    int i;
    int number;
    int total = 0;
    int count= 0;
    char grade;
    double average;
    printf("Enter how many number of subject do you want to add: ");
    scanf("%d",&number);
    for (i = 1 ; i <= number; i++) {
       printf("Enter the subject wise marks: ");
       scanf("%d",&marks);
       total += marks;
        count += 1;
    }
    average = (double)total / count;
    if (average >=80 && average <=100)
        grade = 'A';
    else if (average >=70 && average <80) 
        grade = 'B';
    else if (average >=60 && average <70)
        grade = 'C';
    else if (average >=50 && average <60)
        grade = 'D';
    else if (average >=0 && average <50)
        grade = 'F';
    else {
        printf("you did miss something because average can not be negative or more than 100\n");
        return 0;
    }      
    
    printf("The total marks is: %d\n",total);
    printf("The total subject is: %d\n",count);
    printf("The average is: %.2f\n",average);
    printf("The grade is: %c\n", grade);
    return 0 ;
       
}