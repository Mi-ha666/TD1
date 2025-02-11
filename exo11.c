#include <stdio.h>

int main()
{
 int n, i, fact;
 fact=1;
 printf("Factoriel de :") ;
 scanf("%d", &n);
 if (n>0)
 {
   
   for(i=1 ; i<=n; i++)
   { 
    fact=fact*i;
   }

  printf ("%d! = %d", n, fact) ;
 } 
 else if (n==0)
 {
    fact = 1;
    printf("%d! = %d", n, fact);
 }
 
 return 0;
}