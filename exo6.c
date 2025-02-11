#include <stdio.h>

int main()
{
  float note1,note2,C1,C2,moyenne;
  printf("Ecrivez vos notes avec leurs coefficients.Note 1= ");
  scanf("%f",&note1);
  printf("coefficient 1=");
  scanf("%f", &C1);
  printf("Note 2= ");
  scanf("%f",&note2); 
  printf("coefficient 2= ");
  scanf ("%f", &C2);

  moyenne=((note1*C1)+(note2*C2))/(C1+C2);
  printf ("La moyenne est %f.",moyenne);

}
