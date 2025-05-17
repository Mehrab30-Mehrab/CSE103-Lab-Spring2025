#include <stdio.h>

int main() {
    int s[5][7];
    float avg;
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 7; j++) {
            scanf("%d", &s[i][j]);
            sum += s[i][j];
        }
        avg = (float)sum / 7;
        printf("Salesperson %d: %.2f\n", i + 1, avg);
    }
    return 0;
}