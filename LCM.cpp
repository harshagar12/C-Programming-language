#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,i;
    printf("Enter 2 Numbers");
    scanf("%d%d",&a,&b);
    c=(a<b)?a:b;
    for(i=1;i<=c;i++)
    {
        if(a%i==0&&b%i==0)
        d=i;
    }
    e=(a*b)/d;
    printf("%d is the LCM of %d and %d",e,a,b);
    printf("\n%d is the GCD of %d and %d",d,a,b);
    return 0;
}