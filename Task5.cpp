#include <stdio.h>

int main() {
    char sentences[3][100];
    int i, j, c;
    int vowels;
    char ch;

    printf("Enter 3 sentences separated by semicolons:\n");

    for (i = 0; i < 3; i++) {
        sentences[i][0] = '\0';
        scanf(" %99[^;\n]", sentences[i]);
        scanf("%*c");
    }

    while ((c = getchar()) != '\n' && c != EOF) {
    }

    printf("\n--- Vowel Report ---\n");

    for (i = 0; i < 3; i++) {
        vowels = 0;

        for (j = 0; sentences[i][j] != '\0'; j++) {
            ch = sentences[i][j];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            }
        }

        printf("Sentence %d: %s\n", i + 1, sentences[i]);
        printf("Vowels : %d\n\n", vowels);
    }

    return 0;
}
