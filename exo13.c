#include <stdio.h>

int main()
{
 int i, n, somme=1;
 printf("Tapez n : ");
 scanf("%d", &n);
 for(i=1; i<=n; i++)
 { somme=somme*i;}
 printf("La somme de 1*...*%d = %d", n, somme);
 
return 0;
}