# include <stdio.h>
int main () {
    int number;
    int i ;
    int k ;
    printf("Enter how many num you want to add in the array: ");
    scanf("%d",&number);
    int j[number];
    for ( i = 0 ; i < number ; i++){
        printf("enter your number serailly: ");
        scanf("%d",&j[i]);
    }
    printf("which number are you looking for: ");
    scanf("%d",&k);
    for (i = 0; i < number; i++) {
    if (k == j[i]) {
        printf("The number is found");
    }
}
     for (i = 0 ; i < number ; i++){
        if (k == j[i]){
            printf("the number is found");
        }
        else{
            printf("the number is not found");
        }
     }
    return 0 ;

}