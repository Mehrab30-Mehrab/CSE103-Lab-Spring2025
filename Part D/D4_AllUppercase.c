#include <stdio.h>
#include <ctype.h>

int main() {
    char w[10][20];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", w[i]);
        for (int j = 0; w[i][j]; j++) w[i][j] = toupper(w[i][j]);
        printf("%s\n", w[i]);
    }
    return 0;
}