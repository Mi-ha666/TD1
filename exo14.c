#include <stdio.h>

int main()
{
 int n;
 float i, somme;
 somme=0;
 printf("Nombre n : ");
 scanf("%d", &n);
 
 for(i=1;i<=n;i++)
 {
  somme=somme+(1/i);
 }
 printf("La somme est %f ", somme);

}