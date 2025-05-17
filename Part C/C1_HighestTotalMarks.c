#include <stdio.h>

int main() {
    int a[10][3], sum[10], i, j, max = 0, idx = 0;
    for (i = 0; i < 10; i++) {
        sum[i] = 0;
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
        if (sum[i] > max) {
            max = sum[i];
            idx = i;
        }
    }
    printf("Student %d\n", idx + 1);
    return 0;
}