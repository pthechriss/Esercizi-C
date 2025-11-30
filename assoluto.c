#include <stdio.h>

int valoreAssoluto(int n)
{
    if (n >= 0)
        return n;
    else
        return -n;
}

int main()
{
    int a;
    printf("Insert an integer number:\n");
    scanf("%d", &a);
    printf("valore assoluto: %d\n", valoreAssoluto(a));
    return 0;
}
