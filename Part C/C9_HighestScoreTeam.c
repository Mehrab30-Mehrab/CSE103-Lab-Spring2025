#include <stdio.h>

int main() {
    int s[5][8], sum, max = 0, idx = 0;
    for (int i = 0; i < 5; i++) {
        sum = 0;
        for (int j = 0; j < 8; j++) {
            scanf("%d", &s[i][j]);
            sum += s[i][j];
        }
        if (sum > max) {
            max = sum;
            idx = i;
        }
    }
    printf("Team %d\n", idx + 1);
    return 0;
}