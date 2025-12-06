#include <stdio.h>

int main()
{
    int t = 0;
    int pin;
    do
    {
        printf("Inserire PIN:\n");
        scanf("%d", &pin);
        t++;
    } while (pin != 44122 && t < 3);
    if(pin == 44122)
        printf("Accesso consentito\n");
        else
        printf("Accesso negato\n"); 
    return 0;
}