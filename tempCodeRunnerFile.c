# include <stdio.h>
int main () {
    int number;
    int i ;
    int count = 0;
    int count_1 = 0;

    for (i = 1; i <= 5; i++) {
        printf("Enter the number:\n ");
        scanf("%d", &number);
    
        if (number > 0 ){
           count +=1;
           printf("the positive number is %d", count);
    }
        else if (number < 0){
           count_1 +=1;
           printf("the negative number is%d",count_1) ;
    }
}
    return 0 ;
}