#include <stdio.h>

int main()
{
 int a,b,c,d;
 a=5;
 b=2;
 c=8;
 printf("a=%d. b= %d.c= %d. \n", a,b,c);
 d=a;
 a=b;
 b=c;
 c=d;
 printf("Les valeurs sont maintenant échagées. a=%d, b=%d, c=%d. \n",a,b,c); 


}
