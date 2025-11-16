#include <stdio.h>

int main()
{
  int G, M, A;
  int N0, N1, N2, N3, JD1, resto;
  printf("Inserirsci la tua data di nascita:\n");
  scanf("%d%d%d", &G, &M, &A);
  N0 = (M - 14) / 12;
  N1 = (1461 * (A + 4800 + N0)) / 4;
  N2 = (367 * (M - 2 - 12 * N0)) / 12;
  N3 = (3 * (A + 4900 + N0)) / 400;
  JD1 = N1 + N2 - N3 + G - 32075;
  printf("%d\n", JD1);
  resto = JD1 % 7;
  if (resto == 0)
  printf("Lunedì\n");
  else if (resto == 1)
  printf("Martedì\n");
  else if (resto == 2)
  printf("Mercoledì\n");
  else if (resto == 3)
  printf("Giovedì\n");
  else if (resto == 4)
  printf("Venerdì\n");
  else if (resto == 5)
  printf("Sabato\n");
  else if (resto == 6)
  printf("Domenica\n");
  else
  printf("error\n");
}