#include <stdio.h>
#include <string.h>

int main() {
    char w[10][20];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%s", w[i]);
    for (int i = 0; i < n; i++) {
        int v = 0;
        for (int j = 0; w[i][j]; j++) {
            if (strchr("aeiouAEIOU", w[i][j])) v++;
        }
        printf("%s: %d\n", w[i], v);
    }
    return 0;
}