#include <stdio.h>
#include <ctype.h>

int count_upper(char w[]) {
    int count = 0;
    for(int i = 0; w[i]; i++) {
        if(isupper(w[i])) count++;
    }
    return count;
}

int main() {
    char word[100];
    scanf("%s", word);
    printf("%d\n", count_upper(word));
    return 0;
}