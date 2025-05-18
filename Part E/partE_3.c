#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee e[3];
    int i, maxIndex = 0;
    for(i = 0; i < 3; i++) {
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
        if(e[i].salary > e[maxIndex].salary) maxIndex = i;
    }
    printf("Highest Salary: %d %s %.2f\n", e[maxIndex].id, e[maxIndex].name, e[maxIndex].salary);
    return 0;
}