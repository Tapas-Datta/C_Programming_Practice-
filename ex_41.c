# include <stdio.h>
int main (){
    int number;
    int i ;
    int n;
    int positive_count = 0;
    int negative_count = 0;
    int zeros = 0 ;
    int total = 0;
    int largest;
    printf("Enter how many int you want to add: ");
    scanf("%d",&number);
    for (i = 0 ; i< number; i++ ){ {
        printf("Enter the number");
        scanf("%d",&n);
        total += n;
        largest = n;
    if (i == 0) {
    largest = n;
}
else if (n > largest) {
    largest = n;
}
    }
    if ( n > 0){
        positive_count += 1;
    }
    if (n < 0) {
        negative_count += 1;
    }
    if (n == 0){
        zeros += 1;
    }
}
    printf("Total positive is:%d\n",positive_count);
    printf("Total negative is:%d\n",negative_count);
    printf("Total zero is:%d\n",zeros);
    printf("Total is: %d\n",total);
    printf("Largest number is: %d\n", largest);
    return 0 ;
}
