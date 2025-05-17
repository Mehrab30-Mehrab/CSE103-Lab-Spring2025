#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    float gpa[n], sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%f", &gpa[i]);
        sum += gpa[i];
    }
    float avg = sum / n;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(gpa[i] > avg)
            count++;
    }
    printf("%d\n", count);
    return 0;
}