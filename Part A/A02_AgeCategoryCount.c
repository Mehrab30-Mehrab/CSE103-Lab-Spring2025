#include <stdio.h>

int main() {
    int n, age, child = 0, teen = 0, senior = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &age);
        if(age <= 12)
            child++;
        else if(age <= 19)
            teen++;
        else if(age >= 65)
            senior++;
    }
    printf("%d %d %d\n", child, teen, senior);
    return 0;
}