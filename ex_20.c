# include <stdio.h>
int main () {
    int number;
    int even_count = 0;
    int odd_count = 0;
    int i ;
    int numbers;
    printf("Enter how many number you want to do the calculatio: ");
    scanf("%d",&number);

    for (i = 1 ; i<= number; i++){ {
    printf("Enter the number to see the calculation:");
    scanf("%d",&numbers);
    }
    if (numbers % 2 == 0 ){
        even_count += 1;
    }
    else{
        odd_count += 1;
    }
}
    printf("the total even number is:%d\n ",even_count);
    printf("the odd number is: %d\n",odd_count);
    return 0 ;

}