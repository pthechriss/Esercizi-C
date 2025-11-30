#include <stdio.h>

int divisione(int x, int y, int *pq, int *pr)
{
    if (y == 0)
    {
        return 0;
    }
    else
    {
        *pq = x / y;
        *pr = x % y;
        return 1;
    }
}

int main()
{
    int a, b;
    int q, r;
    printf("Inserire due numeri:\n");
    scanf("%d%d", &a, &b);
    int esito = divisione(a, b, &q, &r);
    if (esito == 0)
    {
        printf("Operazione non eseguibile\n");
    }
    else
    {
        printf("Il quoziente è %d\n", q);
        printf("Il resto è %d\n", r);
    }
    return 0;
}