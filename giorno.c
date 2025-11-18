#include <stdio.h>

int main()
{
    int g, m, a, p;
    printf("Insert a date:\n");
    scanf("%d%d%d", &g, &m, &a);
    if (g == 31 && m == 12)
    {
        printf("1/1/%d\n", a + 1);
    }
    else if (m == 2) {
        int last;
        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
            last =29;
        else
            last = 28;
            if (g == last) {
                printf("1/3/%d\n", a);
            }
            else {
                printf("%d/2/%d\n", g+1, a);
            }
        }
        else {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        p = 31;
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        p = 30;
        if (g == p){
        printf("1/%d/%d\n", m + 1, a);
        }
        else {
        printf("%d/%d/%d\n", g + 1, m, a);
        }
    }
}