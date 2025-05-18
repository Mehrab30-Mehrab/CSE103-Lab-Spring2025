#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    float price;
};
int main() {
    struct Book b[3];
    int i, minIndex = 0, maxIndex = 0;
    for(i = 0; i < 3; i++) {
        scanf("%s %s %f", b[i].title, b[i].author, &b[i].price);
        if(b[i].price > b[maxIndex].price) maxIndex = i;
        if(b[i].price < b[minIndex].price) minIndex = i;
    }
    printf("Most Expensive: %s %s %.2f\n", b[maxIndex].title, b[maxIndex].author, b[maxIndex].price);
    printf("Least Expensive: %s %s %.2f\n", b[minIndex].title, b[minIndex].author, b[minIndex].price);
    return 0;
}