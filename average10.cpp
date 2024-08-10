#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,b,n,i;
    float c;
    b=0;
    for(i=1;i<=10;i++)
    {
        printf("\nEnter a Number:");
        scanf("%d",&n);
        b=b+n;
    }
    c=float (b)/10;
    printf("The Average of the 10 Numbers is: %f",c);
}