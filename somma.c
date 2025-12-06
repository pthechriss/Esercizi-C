#include <stdio.h>

int inp(int n) {
    scanf("%d", &n);
    return n;
}

int main() {
    int i, s, v;
    s = 0;
    for(i = 0; i < 5; i++) {
    v = inp(i);
    s = s + v; }
    printf("La somma è %d\n", s);
    return 0;
}