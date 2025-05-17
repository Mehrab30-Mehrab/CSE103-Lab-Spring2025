#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int words = 0;
    gets(s);
    for (int i = 0; s[i]; i++) {
        if ((s[i] != ' ') && (s[i + 1] == ' ' || s[i + 1] == '\0')) words++;
    }
    printf("%d\n", words);
    return 0;
}