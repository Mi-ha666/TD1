#include <stdio.h>

int main()
{
 int r, n1, n2, dividende, diviseur;
 printf("Les nombres : ");
 scanf("%d", &n1);
 printf("Et ");
 scanf("%d", &n2);
 printf("Sont-ils premiers entre eux? \n");
   if(n1>n2)
   {
    dividende=n1;
    diviseur=n2;
   }
   else if(n1<n2)
   {
    dividende=n2;
    diviseur=n1;
   }
   else
   { dividende=diviseur=n1=n2; }
 
 
   r=dividende%diviseur;//Faut dire avant la boucle si la condition est complétée. 
   while(r != 0)
   {
    dividende=diviseur;// le diviseur devient la dividende
    diviseur=r;//r devient le diviseur
    r=dividende%diviseur;//la nouvelle valeur de r. Et la boucle repart. 
   }
   
  printf("Le PGCD de %d et %d = %d. \n", n1, n2, diviseur);
  
  if(diviseur==1)
  {
   printf(" Alors Oui, %d et %d sont premiers entre eux. ", n1, n2);
  }
  else
  {
  printf(" Donc Non, %d et %d ne sont pas premiers entre eux. ", n1, n2);
  }

 return 0;
}