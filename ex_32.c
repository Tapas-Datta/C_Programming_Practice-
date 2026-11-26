#include <stdio.h>
int main () {
    int number;
    int user;
    int count = 0 ;
    while (1){
    printf("Enter the number:");
    scanf("%d",&number);
    count += 1;
    if ( number %2 == 0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
    printf("Do you want to check another number:? (1 = Yes, 0 = No)");
    scanf("%d",&user);
    if (user == 0){
        printf("Thaknk you amd total you use our prgramm%d",count);
        break;
    }

}
return 0 ;
    
}