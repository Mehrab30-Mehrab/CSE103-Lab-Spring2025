#include <stdio.h>

int main() {
    int n, mark, found = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &mark);
        if(mark == 30)
            found = 1;
    }
    if(found)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}