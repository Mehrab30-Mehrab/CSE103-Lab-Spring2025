#include <stdio.h>

int main() {
    int e[3][12], sum, max = 0, idx = 0;
    for (int i = 0; i < 3; i++) {
        sum = 0;
        for (int j = 0; j < 12; j++) {
            scanf("%d", &e[i][j]);
            sum += e[i][j];
        }
        if (sum > max) {
            max = sum;
            idx = i;
        }
    }
    printf("Household %d\n", idx + 1);
    return 0;
}