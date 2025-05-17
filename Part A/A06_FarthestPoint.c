#include <stdio.h>
#include <math.h>

int main() {
    int n, x, y, fx = 0, fy = 0;
    double max = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        double d = sqrt(x*x + y*y);
        if(d > max) {
            max = d;
            fx = x;
            fy = y;
        }
    }
    printf("%d %d\n", fx, fy);
    return 0;
}