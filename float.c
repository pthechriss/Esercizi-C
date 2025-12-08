#include <stdio.h>
#include <math.h>

int main() {
    float a, x;
    printf("Inserire numero reale:\n");
    scanf("%f", &a);
    x = 1;
    if(x*x != a) {
        while(x = (x + a/x) / 2);
    }
printf("%f", x);
}