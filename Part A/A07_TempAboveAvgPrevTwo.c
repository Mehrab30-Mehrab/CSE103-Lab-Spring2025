#include <stdio.h>

int main() {
    int temp[7], count = 0;
    for(int i = 0; i < 7; i++) {
        scanf("%d", &temp[i]);
    }
    for(int i = 2; i < 7; i++) {
        float avg = (temp[i-1] + temp[i-2]) / 2.0;
        if(temp[i] > avg)
            count++;
    }
    printf("%d\n", count);
    return 0;
}