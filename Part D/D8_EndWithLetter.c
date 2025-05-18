#include <stdio.h>
#include <string.h>

int main() {
    char w[10][20], ch;
    int n;
    scanf("%d %c", &n, &ch);
    for (int i = 0; i < n; i++) {
        scanf("%s", w[i]);
        int len = strlen(w[i]);
        if (w[i][len-1] == ch) printf("%s\n", w[i]);
    }
    return 0;
}