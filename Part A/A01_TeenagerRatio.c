#include <stdio.h>

int main() {
    int n, age, teen = 0, non_teen = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &age);
        if(age >= 13 && age <= 19)
            teen++;
        else
            non_teen++;
    }
    if(non_teen == 0)
        printf("Infinity\n");
    else
        printf("%.2f\n", (float)teen / non_teen);
    return 0;
}