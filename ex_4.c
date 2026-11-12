# include <stdio.h>
# define N 5
int main () {
    int sum;
    double  average;
    int highest;
    int total =0 ;
    int i;
    int scores[N] = {80, 65, 90, 75, 70};
    for (i = 0 ; i < N; i++ )
    total += scores[i];
    average = (double) total / N;
    printf("the sum of that number is: %d\n",total );
    printf("the average of that number is %lf", average);
    return 0;

}



#include <stdio.h>
int main () {
    int values[N] = {13, -2, 7, 41, 0, 5};
    int i;
    int minValue;
    minValue= values[0];
    for (i=1; i <N ; i++)
       if values[i] < minValueas;
          minValue= value[i]

     printf("Minimum = %d\n", minValue);

}

#include <stdio.h>
int main () {
   printf("Programming - Lab 07\n");
   printf("My first C program\n");
   printf("Compilation successful!");
   return 0;
}


#include<stdio.h>
int main() {
   int age = 20;
   double height = 1.78;
   char name[50] = "Tapas";
   printf("My age is: %d\n", age);
   printf("My height is: %.2f\n",height);
   printf("my name is: %s\n",name);               
   return 0;
}



#include <stdio.h>
int main (){
    double width;
    double height;
    double area;
    double perimeter;
    printf("Enter the width: ");
    scanf("%lf",&width);

    printf("Enter the height: ");
    scanf("%lf",&height);

    area = (width * height);
    perimeter = 2 * (width + height);
    printf("The area is %.2f\n",area);
    printf("The perimeter is %.2f\n",perimeter);
    return 0;

}



#include <stdio.h>
int main () {
    double a;
    double b;
    double sum;
    double multi;
    printf("Enter the number: ");
    scanf("%lf",&a);
    printf("Enter the number: ");
    scanf("%lf",&b);
    sum = (a+ b);
    multi = ( a*b);
    printf("the sum of that is %.2f\n",sum);
    printf("the multi of that is %.2f\n",multi);
    return 0;
}



#include <stdio.h>
int main () {
    int seconds;
    int hours;
    int minutes;
    int remaning_second;
    printf("Enter the second to check it: ");
    scanf("%d",&seconds);
    hours = seconds / 3600;
    remaning_second = seconds - (hours * 3600);
    minutes= remaning_second / 60 ;
    seconds= seconds % 60;

    printf("Hours is: %d\n",hours);
    printf("Minutes is: %d\n",minutes);
    printf("Second is: %d\n",seconds);
    return 0;
}