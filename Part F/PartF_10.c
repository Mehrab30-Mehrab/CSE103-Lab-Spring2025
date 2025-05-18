#include <stdio.h>
#include <ctype.h>

int count_lower(char w[]) {
    int count = 0;
    for(int i = 0; w[i]; i++) {
        if(islower(w[i])) count++;
    }
    return count;
}

int main() {
    char word[100];
    scanf("%s", word);
    printf("%d\n", count_lower(word));
    return 0;
}