#include <stdio.h>

void azzera(int *px) {
    *px = 0;
}

int main() {
    int a;
    printf("Inserire numero:\n");
    scanf("%d", &a);
    azzera(&a);
    printf("%d\n", a);
    return 0;
}