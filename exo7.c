#include <stdio.h>

int main()
{
int N,i,max,var;
max=0;
printf("Ecrivez le nombre de chiffres que vous voulez comparer: ");
scanf("%d", &N);
for (i=1;i<=N;i++)
  { 
  printf("Tapez le nombre n°%d : ",i);
  scanf("%d",&var);
   if (max<var)
   {
   max=var;
   }
  }
printf("Le maximum est %d.",max);  
   

}
