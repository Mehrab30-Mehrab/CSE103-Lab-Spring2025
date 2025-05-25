#include <stdio.h>

int main() {
    int n, i, c = 0;
    float sum = 0;
    scanf("%d", &n);
    float a[n];
    for(i = 0; i < n; i++) {
        scanf("%f", &a[i]);
        sum += a[i];
    }
    float avg = sum / n;
    for(i = 0; i < n; i++) {
        if(a[i] > avg) c++;
    }
    printf("%d", c);
    return 0;
}