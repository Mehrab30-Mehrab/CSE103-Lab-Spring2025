#include <stdio.h>
#include <string.h>

int main() {
    char w[10][20];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", w[i]);
        for (int j = 0; w[i][j+1]; j++) {
            if (strchr("aeiouAEIOU", w[i][j]) && strchr("aeiouAEIOU", w[i][j+1])) {
                printf("%s\n", w[i]);
                break;
            }
        }
    }
    return 0;
}