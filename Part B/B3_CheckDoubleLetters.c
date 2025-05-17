#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int found = 0;
    gets(s);
    for (int i = 0; s[i+1]; i++) {
        if (s[i] == s[i+1]) {
            found = 1;
            break;
        }
    }
    if (found) printf("Yes\n");
    else printf("No\n");
    return 0;
}