#include <stdio.h>

int massimo(int a, int b) {
    if(a >= b)
    return a;
    else
    return b;
}
int massimo3(int a, int b, int c) {
    int max = massimo(a, b);
    int n = massimo(max, c);
    return n;
}
int main() {
    int a, b, c;
    printf("Inserire tre numeri:\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Il valore massimo è: %d\n", massimo3(a, b, c));
    return 0;
}