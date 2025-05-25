#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int m[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &m[i]);
        if(m[i] == 30) {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}