#include <stdio.h>

int main() {
    int temp[5][12], i, j, max = -999, year = 0, month = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%d", &temp[i][j]);
            if (temp[i][j] > max) {
                max = temp[i][j];
                year = i;
                month = j;
            }
        }
    }
    printf("Year: %d, Month: %d\n", year + 1, month + 1);
    return 0;
}