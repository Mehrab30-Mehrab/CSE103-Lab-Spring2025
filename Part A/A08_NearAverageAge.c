#include <stdio.h>
#include <math.h>

int main() {
    int n, i, count = 0;
    scanf("%d", &n);
    float age[n], sum = 0;
    for(i = 0; i < n; i++) {
        scanf("%f", &age[i]);
        sum += age[i];
    }
    float avg = sum / n;
    for(i = 0; i < n; i++) {
        if(fabs(age[i] - avg) <= 0.1 * avg)
            count++;
    }
    printf("%d\n", count);
    return 0;
}