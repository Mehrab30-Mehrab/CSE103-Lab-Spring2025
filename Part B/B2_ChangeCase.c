#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int i = 0;
    gets(s);
    while (s[i]) {
        if (isupper(s[i])) s[i] = tolower(s[i]);
        else if (islower(s[i])) s[i] = toupper(s[i]);
        i++;
    }
    puts(s);
    return 0;
}