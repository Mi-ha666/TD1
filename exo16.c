#include <stdio.h>

int main()
{
 int i, N, J, somme, fact;
 somme=0;
 
 printf("Tapez la limite n : ");
 scanf("%d", &N);
 for(J=1; J<=N; J++)
 {
 fact=1;
  for(i=1;i<=J; i++)
  {
   fact=fact*i;
  }
  somme=somme+fact;
 
 }

printf("La somme factoriel de ces nombres = %d. ", somme);
}