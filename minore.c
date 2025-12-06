#include <stdio.h>

int main() {
    int n, s = 0;
    printf("Inserire numeri interi:\n");
    scanf("%d", &n);
    while (n >= 0) {
        s += n;
        scanf("%d", &n);
    }
    printf("La somma è %d\n", s);
}