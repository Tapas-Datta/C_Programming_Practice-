# include <stdio.h>
int main () {
    int number;
    int i ;
    int positives_number= 0 ;
    int negative_number = 0 ; 
    int zeros = 0 ;
    printf("enter how many you want to add in the array: ");
    scanf("%d",&number);
    int j[number];
    for ( i = 0 ; i < number ; i++){
        printf("enter the number serially: ");
        scanf("%d",&j[i]);
    }
    printf("your all number are\n");
    for ( i = 0 ; i <  number; i++){
        printf("your numbner is: %d\n",j[i]);
    }
    for ( i = 0 ; i < number ; i++){
        if (j[i] > 0 ){
            positives_number += 1;
        }
        else if (j[i] < 0){
            negative_number +=1;
        }
        else{
            zeros += 1;
        }
    }
    printf("your total positive number is:%d\n ",positives_number);
    printf("your negative number is:%d\n ",negative_number);
    printf("the zero number: %d\n ",zeros);
    return 0 ;

}