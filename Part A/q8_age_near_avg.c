#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int a[n];
    float sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    float mean = sum / n;
    float low = mean * 0.9, high = mean * 1.1;
    sum = 0;
    int count = 0;
    for (i = 0; i < n; i++) {
        if (a[i] >= low && a[i] <= high) {
            sum += a[i];
            count++;
        }
    }
    if (count > 0)
        printf("%.2f", sum / count);
    else
        printf("0");
    return 0;
}