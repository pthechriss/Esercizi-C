#include <stdio.h>

int main() {
    char c;
    printf("Inserire carattere:\n");
    scanf("%c", &c);
    if(c >= 65 && c <= 90)
    printf("Maiuscola\n");
    else if(c >= 97 && c <= 122)
    printf("Minuscola\n");
    else if(c >= 48 && c <= 57)
    printf("Cifra\n");
    else
    printf("Altro\n");
}