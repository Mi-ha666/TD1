#include <stdio.h>

int main ()
{
int i,N;
printf("Saisissez la fin de l'énumération (un nombre ou chiffre pair) : ");
scanf("%d",&N);
for(i=0; i<=N ; i+=2)
 { 
  printf("%d\n", i);
 }
return 0;
}
