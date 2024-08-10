#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],b,i,j;
    for(i=0;i<5;i++)
    {
        printf("\nEnter the value of the %d element: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<(5-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        }
    }
    printf("\nSmaller to Greater:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}