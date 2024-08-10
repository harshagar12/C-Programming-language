#include <stdio.h>
int main()
{
    int a[5],b,i,j,k;
    for(i=0;i<5;i++)
    {
        printf("\nEnter the value of the element %d: ",(i+1));
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        k=i;
        for(j=(i+1);j<5;j++)
        {
            if(a[j]<a[k])
            {
                k=j;
            }
        }
        b=a[i];
        a[i]=a[k];
        a[k]=b;
    }
    printf("The Sorted Array is: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}