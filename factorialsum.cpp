/*Sum of factorial of N Natural Numbers*/
#include <stdio.h>
#include<conio.h>
int main() 
{   
  int a,b,i,j,n; 
  b=0;
  printf("Enter any number:");
  scanf("%d", &n);
  for(j=n;j>=1;j--)
  {
    a=1;    
    for (i=1;i<=j;i++)
    {
        a=a*i;
    }
    b=b+a;
  }
   printf ("Sum of Factorial is %d",b);
  return 0;
}