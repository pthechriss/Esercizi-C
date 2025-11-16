#include <stdio.h>

int main() {
    int pin, n;
    printf("Insert PIN:\n");
    scanf("%d", &pin);
    if (pin == 44122) {
        printf("Access allowed\n");
        printf("Contact Jessie: ID number 485768\n");
        printf("Contact Hugg: ID number 264588\n");
        printf("Select contact:");
        scanf("%d", &n);
        printf("number %d contact selected\n");
    }
    else {
    printf("Access denied\n");
    printf("The program is closing\n");
    }
    printf("End\n");
}