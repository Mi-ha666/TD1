#include <stdio.h>
#include <math.h>

int main()
{
 int i, J, N;
 float fact, somme=0;
 printf("Tapez le dernier nombre n : ");
 scanf("%d", &N);
 
 for(J=1; J<=N; J++)
 {
  fact=1;
  for(i=1; i<=J; i++)
  { fact=fact*i;}
  somme=somme+(1/fact);
 
 }
  printf("La somme des 1 sur facto limité par %d est = %f.", N, somme);
 
 
}