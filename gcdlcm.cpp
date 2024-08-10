/*GCD and LCM of 2 Numbers*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c,d,e,g;
  g=1;
  printf("Enter two integers");
  scanf("%d",&a);
  scanf("%d",&b);
  c=(a<b) ? a:b;
  while(g<=c)
  {
    if(a%g==0&&b%g==0)
    {
      d=g;
    }
    g++;
  }
  e=(a*b)/d;
  printf("Greatest Common Divisor= %d\n",d);
  printf("Least Common Multiple= %d",e);
  return 0;
}



