#include <stdio.h>

int main() {
    int n, i, c = 0;
    scanf("%d", &n);
    int t[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }
    for(i = 2; i < n; i++) {
        float avg = (t[i-1] + t[i-2]) / 2.0;
        if(t[i] > avg) c++;
    }
    printf("%d", c);
    return 0;
}