#include <stdio.h>

int main() {
    int a, b, c;
    printf("Insert numbers of triangle sides:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && a == c)
    printf("Triangle equilateral\n");
    else
    if(a == b || a == c || b == c)
    printf("Triangle isosceles\n");
    else
    printf("Triangle scalene\n"); 
}