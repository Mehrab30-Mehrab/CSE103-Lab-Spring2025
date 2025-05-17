#include <stdio.h>

int main() {
    int n, mark, passed = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &mark);
        if(mark < 60)
            passed = 0;
    }
    if(passed)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}