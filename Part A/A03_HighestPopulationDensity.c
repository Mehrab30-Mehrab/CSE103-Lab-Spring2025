#include <stdio.h>

int main() {
    int n, i, index = 0;
    scanf("%d", &n);
    int pop[n], area[n];
    float density[n];
    for(i = 0; i < n; i++) {
        scanf("%d %d", &pop[i], &area[i]);
        density[i] = (float)pop[i] / area[i];
    }
    for(i = 1; i < n; i++) {
        if(density[i] > density[index])
            index = i;
    }
    printf("%d\n", pop[index]);
    return 0;
}