#include <stdio.h>
#include <string.h>

int main() {
    char w[10][20];
    int n, hasVowel;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        hasVowel = 0;
        scanf("%s", w[i]);
        for (int j = 0; w[i][j]; j++) {
            if (strchr("aeiouAEIOU", w[i][j])) {
                hasVowel = 1;
                break;
            }
        }
        if (!hasVowel) printf("%s\n", w[i]);
    }
    return 0;
}