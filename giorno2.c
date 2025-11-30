#include <stdio.h>

int bisestile (int a) {
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
            return 1;
     else
            return 0;
}

int gm (int m, int a) {
if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    else if(m == 2) {
    if (bisestile(a))
        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
            return 29;
        else
            return 28; }
    else
        return 31;
}

int valida (int a, int m, int g) {
if(m < 1 || m > 12)
return -1;
if(g < 0 || g > gm(m, a))
return -1;
else
return 0;
}

int main()
{
    int g, m, a;
    printf("Inserire data: \n");
    scanf("%d%d%d", &g, &m, &a);
    if(valida(a, m, g) == -1) {
        printf("Data non valida\n");
        return -1;
    }
    int giorni_mese = gm(m, a);
    if(g == giorni_mese) {
        g = 1;
        if(m = 12) {
            m = 1;
            a++;
        } else {
            m++;
        }
    } else {
        g++;
    }
    printf("%d/%d/%d\n", g, m, a);
    return 0;
}