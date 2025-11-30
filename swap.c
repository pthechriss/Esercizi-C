#include <stdio.h>

void swap(int *px, int *py) {
    int t;
    t = *px;
    *px = *py;
    *py = t;
}

int main() {
    int a, b;
    printf("Inserire due numeri:\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}