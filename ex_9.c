#include <stdio.h>
int main () {
    int num = 10;
    float num_1= 2.43;
    double num_3 = 3.4342 ;
    char name = 'A;
    printf("int:%d  Float:%f  Double:%lf  Char: %c", num , num_1,num_3,name);
    return 0;
}




#include <stdio.h>
int main () {
    int num;
    float num_1;
    double num_3 ;
    char name;
    printf("Enter the integer: ");
    scanf("%d",&num);
    printf("Enter the float: ");
    scanf("%f",&num_1);
    printf("Enter the double: ");
    scanf("%lf",&num_3);
    printf("Enter the character: ");
    scanf(" %c",&name);
    printf("int is:%d\n Float is:%f\n Double is:%lf\n Character is:%d\n ",num,num_1,num_3,name);
    return 0;

}



 #include <stdio.h>
int main () {
    int num;
    char name;
    printf("Enter the num and name: ");
    scanf("%d %c",&num,&name);
    printf("The num:%d and name:%c ",num,name);
    return 0;

}




#include <stdio.h>
int main () {
    int quantity;
    int number; 
    int i;
    int count = 0;
    int count_1 = 0;
    printf("Enter how many times you want to add: ");
    scanf("%d",&quantity);
   for (i = 1; i <= quantity; i++) {
    printf("Enter the number:");
    scanf("%d", &number);

    if (number % 2 == 0)
        count += 1;
    else
        count_1 += 1;
}
    printf("the even number is: %d",count);
    printf("The odd number is: %d",count_1);
    
    return 0;     
}



#include <stdio.h>
int main (){
    int quantity;
    int number;
    int i;
    int highest;
    int lowest;

    printf("Enter how many number you want to add: ");
    scanf("%d",&quantity);

    for (i = 1; i <= quantity; i++) {
       printf("Enter your wish: ");
       scanf("%d",&number);

       if (i == 1) {
           highest = number;
           lowest = number;
       }

       if (number > highest)
           highest = number;

       if (number < lowest)
           lowest = number;
    }

    printf("The highest number is: %d\n",highest);
    printf("The lowest number is: %d\n",lowest);

    return 0;
}