#include <stdio.h>
#include <string.h>

int count_vowels(char w[]) {
    int count = 0;
    for(int i = 0; w[i]; i++) {
        if(strchr("aeiouAEIOU", w[i])) count++;
    }
    return count;
}

int main() {
    char word[100];
    scanf("%s", word);
    printf("%d\n", count_vowels(word));
    return 0;
}