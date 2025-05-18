#include <stdio.h>
struct Apartment {
    int number;
    float squareFeet;
    float rent;
};
int main() {
    struct Apartment a[4];
    int i, bestIndex = 0;
    float rate[4];
    for(i = 0; i < 4; i++) {
        scanf("%d %f %f", &a[i].number, &a[i].squareFeet, &a[i].rent);
        rate[i] = a[i].rent / a[i].squareFeet;
        if(rate[i] > rate[bestIndex]) bestIndex = i;
    }
    printf("Best Rent/Sqft: %d\n", a[bestIndex].number);
    return 0;
}