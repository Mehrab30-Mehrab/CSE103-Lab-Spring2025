#include <stdio.h>

int main() {
    int a[5][6], idx = 0, max = 0;
    for (int i = 0; i < 5; i++) {
        int count = 0;
        for (int j = 0; j < 6; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j]) count++;
        }
        if (count > max) {
            max = count;
            idx = i;
        }
    }
    printf("Student %d\n", idx + 1);
    return 0;
}