#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int x[n], y[n];
    float max = 0, d;
    int idx = 0;
    for (i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
        d = sqrt(x[i]*x[i] + y[i]*y[i]);
        if (d > max) {
            max = d;
            idx = i;
        }
    }
    printf("%d %d", x[idx], y[idx]);
    return 0;
}