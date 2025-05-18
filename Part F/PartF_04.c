#include <stdio.h>

int highest(int a[], int n) {
    int max = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max) max = a[i];
    }
    return max;
}

int main() {
    int a[100], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%d\n", highest(a, n));
    return 0;
}