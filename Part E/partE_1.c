#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
int main() {
    struct Student s[3];
    int i, maxAge = 0;
    float avgAge = 0;
    for(i = 0; i < 3; i++) {
        scanf("%s %d %f", s[i].name, &s[i].age, &s[i].marks);
        avgAge += s[i].age;
        if(s[i].age > maxAge) maxAge = s[i].age;
    }
    avgAge /= 3;
    printf("Average Age: %.2f\n", avgAge);
    printf("Maximum Age: %d\n", maxAge);
    return 0;
}