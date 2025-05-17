#include <stdio.h>

int main() {
    int sales[4][12], i, j, sum, max = 0, idx = 0;
    for (i = 0; i < 4; i++) {
        sum = 0;
        for (j = 0; j < 12; j++) {
            scanf("%d", &sales[i][j]);
            sum += sales[i][j];
        }
        if (sum > max) {
            max = sum;
            idx = i;
        }
    }
    printf("Representative %d\n", idx + 1);
    return 0;
}