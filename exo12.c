#include <stdio.h>

int main(int argc, char *argv[])
{
  int N, i, somme;
  somme=0;
  printf("Ecrivez le nombre N : ");
  scanf("%d", &N);
  for(i=1;i<=N;i++) 
  { 
   somme=somme + i;
  }
  printf("La somme de 1 à %d est %d", N, somme);
  
  

 return 0;
}