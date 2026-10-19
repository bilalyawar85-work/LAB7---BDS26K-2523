#include <stdio.h>

int main() {
    float sensor_data[3][4];
    int r, c;
    int col;

    printf("Enter temperature readings:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 4; c++) {
            printf("Day %d, sensor %d: ", r + 1, c);
            scanf("%f", &sensor_data[r][c]);
        }
    }

    printf("Enter the column index of the faulty sensor (0 to 3): ");
    scanf("%d", &col);

    while (col < 0 || col > 3) {
        printf("Invalid index. Enter a value from 0 to 3: ");
        scanf("%d", &col);
    }

    for (r = 0; r < 3; r++) {
        for (c = col; c < 3; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }

    printf("\n--- Updated Sensor Matrix (3x3) ---\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("%8.2f", sensor_data[r][c]);
        }
        printf("\n");
}

    return 0;
}
