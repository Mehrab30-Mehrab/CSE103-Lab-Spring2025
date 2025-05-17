#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int uv = 0, lv = 0, i = 0;
    gets(s);
    while (s[i]) {
        if (strchr("AEIOU", s[i])) uv++;
        if (strchr("aeiou", s[i])) lv++;
        i++;
    }
    printf("%d %d\n", uv, lv);
    return 0;
}