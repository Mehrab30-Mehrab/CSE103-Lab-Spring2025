#include <stdio.h>
#include <string.h>

int main() {
    char w[10][20];
    int n, max = 0, idx = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%s", w[i]);
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; w[i][j]; j++) {
            if (w[i][j] == 't' || w[i][j] == 'T') count++;
        }
        if (count > max) {
            max = count;
            idx = i;
        }
    }
    printf("%s\n", w[idx]);
    return 0;
}