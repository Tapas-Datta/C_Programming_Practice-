#include <stdio.h>

int main () {
    char word[100];
    int count= 0 ;
    printf("Enter the word: ");
    scanf("%49[^\n]",word);
    printf("Your word is: %s\n", word);

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'a' || word[i] == 'A') {
            count += 1;
        }
        if (word[i] == 'e' || word[i] == 'E') {
            count += 1;
        }
        if (word[i] == 'i' || word[i] == 'I') {
            count += 1;
        }
        if (word[i] == 'o' || word[i] == 'O') {
            count += 1;
        }
        if (word[i] == 'u' || word[i] == 'U') {
            count += 1;
        }
    }
    printf("Total vowel is: %d",count);
    return 0;
}