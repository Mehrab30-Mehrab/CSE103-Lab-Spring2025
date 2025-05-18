#include <stdio.h>
struct Car {
    int id;
    char model[50];
    float rate;
};
int main() {
    struct Car c[3];
    int i, days;
    scanf("%d", &days);
    for(i = 0; i < 3; i++) {
        scanf("%d %s %f", &c[i].id, c[i].model, &c[i].rate);
        printf("Car ID: %d Total Cost: %.2f\n", c[i].id, c[i].rate * days);
    }
    return 0;
}