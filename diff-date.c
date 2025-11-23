#include <stdio.h>

int giorno(int G, int M, int A) 
{
    int N0, N1, N2, N3;
N0 = (M - 14) / 12;
N1 = (1461 * (A + 4800 + N0)) / 4;
N2 = (367 * (M - 2 - 12 * N0)) / 12;
N3 = (3 * (A + 4900 + N0)) / 400;
return N1 + N2 - N3 + G - 32075;
}

int main () {
    int G1, M1, A1;
    int G2, M2, A2;
    int JD1, JD2;
    printf("Inserirsci la tua data di nascita:\n");
  scanf("%d%d%d", &G1, &M1, &A1);
  JD1 = giorno(G1, M1, A1);
  printf("Inserisci data:\n");
  scanf("%d%d%d", &G2, &M2, &A2);
  JD2 = giorno(G2, M2, A2);
  printf("La differernza è: %d giorni.\n", JD2 - JD1);
return 0;

}