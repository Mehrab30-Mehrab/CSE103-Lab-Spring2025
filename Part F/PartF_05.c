#include <stdio.h>

int lowest(int a[], int n) {
    int min = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < min) min = a[i];
    }
    return min;
}

int main() {
    int a[100], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%d\n", lowest(a, n));
    return 0;
}