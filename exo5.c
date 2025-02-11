#include <stdio.h>
#include <math.h>

int main()
{
 float a,b,c,x1,x2,delta,p1,p2;
 printf("A= ");
 scanf("%f",&a);
 printf("B= ");
 scanf("%f",&b);
 printf("C= ");
 scanf("%f",&c);
 delta=(b*b)-(4*a*c);
 if (delta>0)
 {
  x1=((-b)+ sqrt(delta))/(2*a); 
  x2=((-b)-sqrt(delta))/(2*a);
  printf("Il y a deux solutions x1=%f et x2=%f.", x1,x2); 
 } 
else if (delta==0)
  {
  x1=(-b)/(2*a);
  printf("IL n'y a qu'une seule solution x=%f.", x1);
  }
else 
  {
  p1=(-b/(2*a));
  p2=(sqrt(-delta)/(2*a));
  x1=p1-p2;
  x2=p1+p2;
  printf("IL y a deux solutions x1=%f-%fi et x2=%f+%fi.\n", p1,p2,p1,p2);
}
  
 return 0;
}
