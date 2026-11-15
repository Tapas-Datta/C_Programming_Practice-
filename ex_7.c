

// # include <stdio.h>
// int main () {
//     int number;
//     int i;
//     int total=0;
//     printf("Enter the number you want to : ");
//     scanf("%d",&number);
//     for (i = 1; i <= number; i++)
//        total += i;
//        printf("the sum of that number is that %d",total);
//     return 0;

// }

// # include <stdio.h>
// int main () {
//     int number;
//     int i;
//     int total=0;
//     int num;

//     printf("Enter how many  number you want to calculate: ");
//     scanf("%d",&number);
//     for (i =1 ; i <= number; i++) {
//        printf("enter the number");
//        scanf("%d",&num);
//        total += num;
//     }
    
//     printf("the total sum of that number is%d",total);
//     return 0;

// }


// #include <stdio.h>
// int main () {
//     int number;
//     int i;
//     int total= 0;
//     int num;
//     float average;
//     int count = 0;
//     int maximum;
//     int minimum;
//     printf("Enter the number want to calculte: ");
//     scanf("%d",&number);

//     for (i = 1; i <= number; i++) {
//         printf("enter the number by serial: ");
//         scanf("%d",&num);
//         if (i == 1) {
//         maximum = num;
//         minimum= num;
//         }
//         if (num > maximum)
//            maximum = num;
        
//         if (num < minimum)
//            minimum = num;
        
//         count +=1;
//         total += num;
//         average = (float)total / count;


//     }
//     printf("the sum if that number is%d\n",total);
//     printf("The average of that number is%.2f\n",average);
//     printf("the maximum of that number is %d\n",maximum);
//     printf("the minimum of that number is %d\n",minimum);
    
//     return 0 ;
// }


# include<stdio.h>
int main () {
    int number;
    int total_count = 0;
    int positive_count = 0;
    int negative_count = 0;
    int total = 0;
    int i;
    float average;
    while (number != 0) 
    printf("Enter the number ");
    scanf("%d",&number);
       if (number > 0){
          total +=number;
          positive_count += 1;
          total_count +=1;
       }
          
        else if (number < 0){
          total -= number;
           negative_count += 1;
           total_count += 1;
        average = ((float)total / total_count );   
        }   
    
    printf("the sum of that number is: %d\n",total);
    printf("the average of the. number is:  %.2f\n",average);
    printf("the positive total number:%d\n",positive_count);
    printf("the negative total number: %d\n",negative_count);
    printf("the total number you put is: %d\n", total_count);
    return 0 ;
       


}