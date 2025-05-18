#include <stdio.h>

float average(int a[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += a[i];
    return sum / (float)n;
}

int main() {
    int a[100], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%.2f\n", average(a, n));
    return 0;
}