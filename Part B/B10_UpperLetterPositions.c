#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    gets(s);
    for (int i = 0; s[i]; i++) {
        if (isupper(s[i])) printf("%d ", i);
    }
    return 0;
}