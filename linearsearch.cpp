#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],b,c,i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter the value of the %d element: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter a number to be found in the loop: ");
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
        if(b==a[i])
        c=1;
    }
    if(c==1)
    printf("\n%d found in the array",b);
    else
    printf("\n%d not found in the array",b);
    return 0;
}