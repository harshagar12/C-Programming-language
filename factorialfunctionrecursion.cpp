#include<stdio.h>
int fact(int x)
{
    if(x<=1)
    return 1;
    else
    return x*fact(x-1);
}
int main()
{
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b=fact(a);
    printf("The Factorial of %d is %d",a,b);
    return 0;
}
