#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Scan integer numbers:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(a * d == b * c)
    printf("Equal\n");
    else
    printf("Not equal\n");
}