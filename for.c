#include <stdio.h>

int quadrato(int a) {
return a*a;
}

int main() {
    int i; int j;
    for(i = 1; i <= 10; i++){
        j = quadrato(i);
    printf("%d\n", j);
    }
    return 0;
}