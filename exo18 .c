#include <stdio.h>

int main()
{
 int r, n1, n2, dividende, diviseur;
 printf("Trouver le pgcd de : ");
 scanf("%d", &n1);
 printf("Et ");
 scanf("%d", &n2);
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
   
  printf("Le PGCD de %d et %d = %d. ", n1, n2, diviseur);
 
 


 return 0;
}