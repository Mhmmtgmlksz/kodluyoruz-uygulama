#include <stdio.h>
#include <cs50.h>
#include <string.h>

int IsPalindrom(char* word) {
    int length = strlen(word);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return 0; // Palindrom değil
        }
    }

    return 1; // Palindrom
}

int main() {
    char word[100];

    printf("Kelimeyi girin: ");
    scanf("%s", word);

    if (IsPalindrom(word)) {
        printf("%s, bir palindromdur.\n", word);
    } else {
        printf("%s, bir palindrom değildir.\n", word);
    }

    return 0;
}