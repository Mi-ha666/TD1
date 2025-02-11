#include <stdio.h>

int main ()
{
int note1=21, note2=22,somme,moyenne;
  while (note1>20 && note2>20)
  {
  printf("Ecrivez vos deux notes notés sur 20. note 1= ");
  scanf("%d",&note1);
  printf("note 2= ");
  scanf("%d", &note2); 
  }
  somme=note1+note2;
  moyenne= somme/2;
  printf("La somme est %d et la moyenne est %d.", somme,moyenne); 
    
}
