#include <stdio.h>

int biggest_factor(int n) {
    for(int i = n / 2; i > 0; i--) {
        if(n % i == 0) return i;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", biggest_factor(n));
    return 0;
}