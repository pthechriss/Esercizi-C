#include <stdio.h>

int main()
{
    int i, m, n, q;
    scanf("%d%d", &m, &n);
    i = m;
    q = 0;
    while (i >= n)
    {
        i = i - n;
        q++;
    }
    printf("%d\n", q);
}