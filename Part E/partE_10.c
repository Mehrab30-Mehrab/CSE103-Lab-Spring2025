#include <stdio.h>
struct Athlete {
    char name[50];
    char sport[50];
    int medals;
};
int main() {
    struct Athlete a[5];
    int i, maxIndex = 0;
    for(i = 0; i < 5; i++) {
        scanf("%s %s %d", a[i].name, a[i].sport, &a[i].medals);
        if(a[i].medals > a[maxIndex].medals) maxIndex = i;
    }
    printf("Most Medals: %s\n", a[maxIndex].name);
    return 0;
}