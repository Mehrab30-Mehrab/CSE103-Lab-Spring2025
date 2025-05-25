#include <stdio.h>

int main() {
    int n, i, age, c1 = 0, c2 = 0, c3 = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] <= 12) c1++;
        else if (a[i] <= 19) c2++;
        else if (a[i] >= 65) c3++;
    }
    printf("%d %d %d", c1, c2, c3);
    return 0;
}