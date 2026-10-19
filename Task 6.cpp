#include <stdio.h>

int main() {
    int shifts[4][3];
    int i, j;
    int index;

    printf("Enter the initial 3x3 production data:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Workstation %d, shift %d: ", i, j + 1);
            scanf("%d", &shifts[i][j]);
        }
    }

    printf("Enter the row index for insertion (0 to 3): ");
    scanf("%d", &index);

    while (index < 0 || index > 3) {
        printf("Invalid index. Enter a value from 0 to 3: ");
        scanf("%d", &index);
    }

    for (i = 3; i > index; i--) {
        for (j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j];
        }
    }

    printf("Enter the 3 new production values:\n");
    for (j = 0; j < 3; j++) {
        printf("New value %d: ", j + 1);
        scanf("%d", &shifts[index][j]);
    }

    printf("\n--- Updated Production Matrix ---\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", shifts[i][j]);
        }
        printf("\n");
}

    return 0;
}
