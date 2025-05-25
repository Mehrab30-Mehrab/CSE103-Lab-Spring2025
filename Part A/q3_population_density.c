#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int pop[n], area[n];
    float max = 0;
    int idx = 0;
    for(i = 0; i < n; i++) {
        scanf("%d %d", &pop[i], &area[i]);
        float d = (float)pop[i] / area[i];
        if(d > max) {
            max = d;
            idx = i;
        }
    }
    printf("%d %d", pop[idx], area[idx]);
    return 0;
}