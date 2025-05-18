#include <stdio.h>
#include <string.h>

int main() {
    char w[10][20];
    int n, max = 0, idx = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", w[i]);
        if (strlen(w[i]) > max) {
            max = strlen(w[i]);
            idx = i;
        }
    }
    printf("%s\n", w[idx]);
    return 0;
}