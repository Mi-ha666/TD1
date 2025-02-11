#include <stdio.h>

int main()
{
int i,N,r;
printf("Tapez votre nombre : ");
scanf("%d",&N);
printf("Les diviseurs de %d sont ", N);
for(i=1; i<=N; i++)
 {
 r=N%i;
   if(r==0)
   { printf("%d \n",i);}
 } 
 

}
