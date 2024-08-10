#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,b,c,d;
    printf("Enter any 3 Numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    (a>b&&a>c)?printf("%d is the greatest Number",a):((b>c&&b>a)?printf("%d is the greatest Number",b):printf("%d is the greatest Number",c));
    return 0;
}