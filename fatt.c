#include <stdio.h>

int primo(int i)
{
    int j;
    if (i < 2)
        return 0;
    for (j = 2; j < i; j++)
    {
        if (i % j == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, i, c;
    printf("Inserire numero:\n");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (primo(i))
                c = 0;
            while (n % i == 0)
            {
                c++;
                n = n / i;
            }
            if(c <= 1)
            printf("%d", i);
            else
            printf("%d^%d", i, c);
            if(n > 1)
            printf(" x ");
        }
    }
    printf("\n");
}