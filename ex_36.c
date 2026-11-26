# include <stdio.h>
int main () {
    int number[5];
    int i;
    int highest;
    for (i= 0; i < 5; i++){
    printf("Enter the number: ");
    scanf("%d",&number[i]);
}
    printf("your number is\n");
    for (i = 0; i < 5; i++){
    printf("your number is: %d\n",number[i]);
}   
     highest = number[0];
    for (i= 0; i < 5; i++){
        if (number[i] > highest){
        highest = number[i];
        }
   
}
    int lowest= number[0];
    for ( i = 0; i < 5; i++){
        if ( number[i] < lowest){
            lowest = number [i];
        }
    }
     int second_highest = lowest;
    for (i= 0; i < 5; i++){
        if ( number[i] < highest && number[i] > lowest){
        second_highest = number[i];
    } 
}
    printf("The highest number is %d\n",highest);
    printf("The lowest number is: %d\n",lowest);
    printf("the second highest number is:%d\n",second_highest);
    return 0 ;

}