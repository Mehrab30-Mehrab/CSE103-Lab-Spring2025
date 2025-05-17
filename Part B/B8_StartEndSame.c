#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    gets(s);
    int len = strlen(s);
    if (s[0] == s[len - 1]) printf("Yes\n");
    else printf("No\n");
    return 0;
}