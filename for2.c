#include <stdio.h>

int pari(int n) {
    return n % 2 == 0;
}

int main() {
    int i; int j;
    for(i = 1; i <= 20; i++) {
        j = pari(i);
        printf("%d\n", j);
    }
    return 0;
}