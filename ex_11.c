# include <stdio.h>
int main () {
    int number;
    int reminder;
    int total = 0;
    printf("Enter the number to see the sum: ");
    scanf("%d",& number);
    while (number > 0) {
        reminder = number % 10 ;
        total += reminder;
        number = number / 10;
    }
    printf("The sum of the enter number is: %d",total);
    return 0 ;
}




#include <stdio.h>
int main () {
    int number;
    int reminder;
    int highest = 0;
    printf("Enter the number to see the largest the number: ");
    scanf("%d",&number){
    while (number > 0) {
       reminder = number % 10;

       if (reminder > highest)
           highest = reminder;

       number = number / 10;
    }
    printf("The largest digit is: %d",highest);
    return 0;
}


#include <stdio.h>
int main () {
printf("Hello,C!");
return 0 ;
}


#include <stdio.h>
int main() {
  printf("Hello World!\nI am learning C.\nAnd it is awesome!");
  return 0;
}


#include <stdio.h>
int main () {
    printf("Hello Worlld\n\nHello C\n");
    return 0 ;
}


#include <stdio.h>
int main () {
    printf("  *\n");
    printf(" ***\n");
    printf("*****\n");
    return 0 ;
}


#include <stdio.h>
int main () {
    int number = 23 ;
    char name []= "Tapas Datta";
    printf("My name is: %s and my nmber is: %d",name,number);
    return 0 ;
}


