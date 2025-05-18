#include <stdio.h>

int is_perfect(int n) {
    int sum = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", is_perfect(n) ? "Perfect" : "Not Perfect");
    return 0;
}