#include <stdio.h>

int main () {
    char word[100];
    int count = 0;
    int count_1 = 0;

    printf("Enter your word: ");
    scanf("%99s", word);

    printf("Your word is: %s\n", word);

    for (int i = 0; word[i] != '\0'; i++) {

        if ((word[i] >= 'A' && word[i] <= 'Z') ||
            (word[i] >= 'a' && word[i] <= 'z')) {
            count += 1;
        }

        if (word[i] >= '0' && word[i] <= '9') {
            count_1 += 1;
        }
    }

    printf("Total letters: %d\n", count);
    printf("Total digits: %d\n", count_1);

    return 0;
}