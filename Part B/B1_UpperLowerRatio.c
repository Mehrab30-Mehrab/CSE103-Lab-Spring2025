#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int upper = 0, lower = 0, i = 0;
    gets(s);
    while (s[i]) {
        if (isupper(s[i])) upper++;
        if (islower(s[i])) lower++;
        i++;
    }
    printf("%.2f\n", (float)upper / lower);
    return 0;
}