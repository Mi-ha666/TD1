#include <stdio.h>
#include <math.h>

int main()
{
  int i, N, somme;
  somme=0;
  printf("Tapez la limite n : ");
  scanf("%d", &N);
  for (i=0; i<=N;i++)
  {
   somme=somme+ pow(10, i);
  }
  printf("La somme de 10 puissance est %d. ", somme);



}