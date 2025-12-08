#include <stdio.h>

int main() 
{
    int n, s, i;
    printf("Inserire un numero:\n");
    scanf("%d", &n);
    s = 1;
    for (i = 1; i <= n; i++)
    {
        if(i % 2 == 0) {
            s = s * i;
        }
    }
    printf("%d\n", s);
    return 0;
}