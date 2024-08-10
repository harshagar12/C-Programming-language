#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,b,n,r;
    printf("Enter any Integer Number");
    scanf("%d",&a);
    b=0;
    for(n=a;n>0;)
    {
        r=n%10;
        b=b*10+r;
        n=n/10;
    }
    if(a==b)
    {
       printf("The Number is Palindrome");
    }
    else
    {
       printf("Not a Palindrome");
    }
}