#include <stdio.h>

int main() {
    int n, i, t = 0, nt = 0;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] >= 13 && a[i] <= 19) t++;
        else nt++;
    }
    if(nt != 0)
        printf("%.2f", (float)t / nt);
    else
        printf("Undefined");
    return 0;
}