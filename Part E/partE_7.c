#include <stdio.h>
struct Vehicle {
    int id;
    char type[50];
    float price;
};
int main() {
    struct Vehicle v[5];
    int i, minIndex = 0, maxIndex = 0;
    for(i = 0; i < 5; i++) {
        scanf("%d %s %f", &v[i].id, v[i].type, &v[i].price);
        if(v[i].price > v[maxIndex].price) maxIndex = i;
        if(v[i].price < v[minIndex].price) minIndex = i;
    }
    printf("Most Expensive: %s\n", v[maxIndex].type);
    printf("Least Expensive: %s\n", v[minIndex].type);
    return 0;
}