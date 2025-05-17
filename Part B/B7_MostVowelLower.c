#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int count[5] = {0};
    gets(s);
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'a') count[0]++;
        else if (s[i] == 'e') count[1]++;
        else if (s[i] == 'i') count[2]++;
        else if (s[i] == 'o') count[3]++;
        else if (s[i] == 'u') count[4]++;
    }
    int max = 0;
    for (int i = 1; i < 5; i++) {
        if (count[i] > count[max]) max = i;
    }
    printf("Most frequent vowel: ");
    printf("%c\n", "aeiou"[max]);
    return 0;
}