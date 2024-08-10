#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],b,c,i;
    b=2147483647;
    c=0;
    for(i=0;i<5;i++)
    {
        printf("\nEnter the value of the %d element: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        c>a[i]?c=c:c=a[i];
    }
    for(i=0;i<5;i++)
    {
        b<a[i]?b=b:b=a[i];
    }
    printf("\nThe greatest number is %d",c);
    printf("\nThe smallest number is %d",b);
    return 0;
}