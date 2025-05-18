#include <stdio.h>
struct City {
    char name[50];
    int population;
    float area;
};
int main() {
    struct City c[3];
    int i, maxIndex = 0;
    float density[3];
    for(i = 0; i < 3; i++) {
        scanf("%s %d %f", c[i].name, &c[i].population, &c[i].area);
        density[i] = c[i].population / c[i].area;
        if(density[i] > density[maxIndex]) maxIndex = i;
    }
    printf("Highest Density City: %s\n", c[maxIndex].name);
    return 0;
}