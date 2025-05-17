#include <stdio.h>

int main() {
    int temp[3][7];
    for (int i = 0; i < 3; i++) {
        int max = -999, day = 0;
        for (int j = 0; j < 7; j++) {
            scanf("%d", &temp[i][j]);
            if (temp[i][j] > max) {
                max = temp[i][j];
                day = j;
            }
        }
        printf("City %d hottest day: %d\n", i + 1, day + 1);
    }
    return 0;
}