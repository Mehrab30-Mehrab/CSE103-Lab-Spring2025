#include <stdio.h>

int gcd(int a, int b) {
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));
    return 0;
}