#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,b,i,j;
    b=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d\t",b);
        b++;
        }
        printf("\n");
    }
}