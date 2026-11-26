# include  <stdio.h>
#include <string.h>

int main () {
    int count = 0;
    char name[100];
    printf("Enter the word: ");
    scanf("%49[^\n]",name);
    count = strlen(name);
    printf("the output is: %d",count);
    return 0 ;
}
