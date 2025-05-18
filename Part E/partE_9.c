#include <stdio.h>
struct School {
    char name[50];
    int students;
    int teachers;
};
int main() {
    struct School s[5];
    int i, bestIndex = 0;
    float ratio[5];
    for(i = 0; i < 5; i++) {
        scanf("%s %d %d", s[i].name, &s[i].students, &s[i].teachers);
        ratio[i] = (float)s[i].students / s[i].teachers;
        if(ratio[i] > ratio[bestIndex]) bestIndex = i;
    }
    printf("Best Ratio: %s\n", s[bestIndex].name);
    return 0;
}