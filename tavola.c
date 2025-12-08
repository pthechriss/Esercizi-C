#include <stdio.h>

int main()
{
    int a, b;
    for (b = 1; b <= 10; b++)
    {
        for (a = 1; a <= 10; a++)
        {
            printf("%2d ", a * b);
        }
        printf("\n");
    }
}