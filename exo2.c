#include <stdio.h>

int main()
{
int a,b;
printf("Tapez vos deux nombres. a= ");
scanf("%d", &a);
printf("b= ");
scanf("%d", &b);
if ( a*b<0)
  {printf ("Le produit de ces deux nombres est négatif.");}
  else if (a*b>0)
  {printf("Le produit de ces deux nombres est positif.");}
}
