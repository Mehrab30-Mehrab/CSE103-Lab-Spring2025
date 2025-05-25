#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int m[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &m[i]);
    }
    for (i = 0; i < n; i++) {
        if (m[i] >= 60) printf("%d ", m[i]);
    }
    return 0;
}