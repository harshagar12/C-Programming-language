/*To Find Greater Between 2 Numbers*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter 2 Numbers");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is The Greater Number",a);
    }
    else
    {
        printf("%d is The Greater Number",b);
    }
    return 0;
}
