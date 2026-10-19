#include <stdio.h>

int main() {
    char word_grid[3][100];
    char longest[100];
    int i, j, k, m, c;
    int start, len;
    int max_len = 0;
    int max_row = 0;
    int max_col = 0;

    longest[0] = '\0';

    for (i = 0; i < 3; i++) {
        printf("Enter row %d (3 words): ", i);
        word_grid[i][0] = '\0';
        scanf(" %99[^\n]", word_grid[i]);

        while ((c = getchar()) != '\n' && c != EOF) {
        }
    }

    for (i = 0; i < 3; i++) {
        k = 0;

        for (j = 0; j < 3; j++) {
            while (word_grid[i][k] == ' ') {
                k++;
            }

            start = k;
            len = 0;

            while (word_grid[i][k] != ' ' && word_grid[i][k] != '\0') {
                len++;
                k++;
            }

            if (len == 0) {
                break;
            }

            if (len > max_len) {
                max_len = len;
                max_row = i;
                max_col = j;

                for (m = 0; m < len; m++) {
                    longest[m] = word_grid[i][start + m];
                }
                longest[len] = '\0';
            }
        }
    }

    if (max_len == 0) {
        printf("No words found.\n");
    } else {
        printf("\nLongest word: %s\n", longest);
        printf("Length: %d\n", max_len);
        printf("Row index (i): %d\n", max_row);
        printf("Column index(j): %d\n", max_col);

	}

    return 0;
}
