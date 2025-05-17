#include <stdio.h>

int main() {
    int b[6][5], max = 0, idx = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &b[i][j]);
            if (b[i][j] > max) {
                max = b[i][j];
                idx = i;
            }
        }
    }
    printf("Student %d\n", idx + 1);
    return 0;
}