#include <stdio.h>

int is_prime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", is_prime(n) ? "Prime" : "Not Prime");
    return 0;
}