#include <stdio.h>
int main(){
    int number;
    int i ;
    printf("Enter the number: ");
    scanf("%d",&number);
    for (i = 1 ; i <= number; i++)
    printf("the numebr is that: %d\n", i);
    return 0;

}



#include<stdio.h>
int main(){
    int number;
    int i;
    printf("enter to see the revrse");
    scanf("%d", &number);
    for (i = number; i >= 1; i--)
    printf("the reverse of that: %d\n",i);
}



#include <stdio.h>
int main () {
    int number;
    int i;
    printf("enter to see the revrse");
    scanf("%d", &number);
    while(number >= 1)
    printf("the reverse of that: %d\n",number--);
    return 0;
}


#include <stdio.h>
int main () {
    int number ;
    int i;
    int count = 0 ;
    int count_1=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    for (i=1 ; i <=number ; i++)
    if (i % 2 ==0)
    count += i ;
    else
    count_1 += i;
    printf("that number is even:%d\n", count);
    printf("the total odd number is: %d\n",count_1);
    return 0;

}

#include <stdio.h>
int main () {
    int number;
    int i;
    int count =1 ;
    printf("Enter the number: ");
    scanf("%d",&number);
    for (i =1 ; i <= number; i++ )
    count *= i;
    printf("the factorial of that number is that: %d\n",count);
    return 0;
}
# include <stdio.h>
int main () {
    char word[100];
    int vowel = 0;
    int consonants = 0;
    int i;
    printf("enter the your text");
    scanf("%s",&word);
    for (i = 0; word[i] != '\0'; i++)
    if ( word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
    vowel +=1;
    else
    consonants +=1;
    printf("the total vowel is %d",vowel);
    printf("the consonatant is %d",consonants);
    return 0;

}
