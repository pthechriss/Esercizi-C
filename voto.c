#include <stdio.h>

int main()
{
    int v;
    printf("Inserisci il voto:\n");
    scanf("%d", &v);
    if (v < 0 || v > 30)
    {
        printf("Errore: voto non valido\n");
    }

    else if (v >= 0 && v <= 17)
    {
        printf("Insufficiente\n");
    }

    else if (v >= 18 && v <= 22)
    {
        printf("Sufficiente\n");
    }
    else if (v >= 23 && v <= 26)
    {
        printf("Buono\n");
    }
    else if (v >= 27 && v <= 29)
    {
        printf("Ottimo\n");
    }
    else
    {
        printf("Eccellente\n");
    }
}