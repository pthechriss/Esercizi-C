#include <stdio.h>

int main() {
    int pin;
    richiesta:
    printf("Inserire PIN:\n");
    scanf("%d", &pin);
    if(pin != 44122)
    goto richiesta;
    printf("Accesso consentito\n");
    return 0;
}