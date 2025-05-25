#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    float p[n], q[n], max = 0;
    int idx = 0;
    for (i = 0; i < n; i++) {
        scanf("%f %f", &p[i], &q[i]);
        if (q[i] != 0) {
            float unit = p[i] / q[i];
            if (unit > max) {
                max = unit;
                idx = i;
            }
        }
    }
    printf("%.2f", p[idx]/q[idx]);
    return 0;
}