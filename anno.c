#include <stdio.h>

int main()
{
    int m, a;
    printf("Insert month and year:\n");
    scanf("%d%d", &m, &a);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        printf("31\n");
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        printf("30\n");
    }
    if (m == 2)
        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
            printf("29\n");
        else
            printf("28\n");
}