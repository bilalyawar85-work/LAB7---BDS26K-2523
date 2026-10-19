#include <stdio.h>

int main() {
    char secret_messages[3][100];
    int i, j, c;
    int spaces, words;

    for (i = 0; i < 3; i++) {
        printf("Enter message %d: ", i + 1);
        secret_messages[i][0] = '\0';
        scanf("%99[A-Z ]", secret_messages[i]);

        while ((c = getchar()) != '\n' && c != EOF) {
        }
    }

    printf("\n--- Filtered Messages ---\n");

    for (i = 0; i < 3; i++) {
        spaces = 0;
        words = 0;

        for (j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ') {
                spaces++;
            } else if (j == 0 || secret_messages[i][j - 1] == ' ') {
                words++;
            }
        }

        printf("Message %d: [%s]\n", i + 1, secret_messages[i]);
        printf("Spaces: %d, Words: %d\n\n", spaces, words);
    }

    return 0;
}
