#include <stdio.h>

int main() {
    char w[10][20];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", w[i]);
        for (int j = 0; j < 3 && w[i][j]; j++) {
            printf("%c", w[i][j]);
        }
        printf("\n");
    }
    return 0;
}