#include <stdio.h>
struct Movie {
    char title[50];
    char director[50];
    int year;
};
int main() {
    struct Movie m[3];
    int i, minYearIndex = 0;
    for(i = 0; i < 3; i++) {
        scanf("%s %s %d", m[i].title, m[i].director, &m[i].year);
        if(m[i].year < m[minYearIndex].year) minYearIndex = i;
    }
    printf("Oldest Movie: %s\n", m[minYearIndex].title);
    return 0;
}