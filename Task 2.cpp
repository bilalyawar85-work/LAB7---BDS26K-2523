#include <stdio.h>

int main() {
    char logs[3][30];
    int i, j, k;
    int count = 0;

    for (k = 0; k < 3; k++) {
        printf("Enter log entry %d: ", k + 1);
        scanf(" %[^,],%[^,],%[^\n]", logs[0], logs[1], logs[2]);

        for (i = 0; i < 3; i++) {
            for (j = 0; logs[i][j] != '\0'; j++) {
                if (logs[i][j] >= 'A' && logs[i][j] <= 'Z') {
                    count++;
                }
            }
        }
    }

    printf("Total uppercase letters: %d\n", count);

    return 0;
}
