#include <stdio.h>

int main() {
    int n, price, weight;
    float max = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &price, &weight);
        float unit = (float)price / weight;
        if(unit > max)
            max = unit;
    }
    printf("%.2f\n", max);
    return 0;
}