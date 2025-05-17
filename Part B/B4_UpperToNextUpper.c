#include <stdio.h>

int main() {
    char s[100];
    int i = 0;
    gets(s);
    while (s[i]) {
        if (s[i] >= 'A' && s[i] < 'Z') s[i]++;
        else if (s[i] == 'Z') s[i] = 'A';
        i++;
    }
    puts(s);
    return 0;
}