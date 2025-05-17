#include <stdio.h>

int main() {
    int c[4][7], sum, max = 0, idx = 0;
    for (int i = 0; i < 4; i++) {
        sum = 0;
        for (int j = 0; j < 7; j++) {
            scanf("%d", &c[i][j]);
            sum += c[i][j];
        }
        if (sum > max) {
            max = sum;
            idx = i;
        }
    }
    printf("Individual %d\n", idx + 1);
    return 0;
}