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
        b=a[i];
        /*for(j=i-1;(b<a[j]&&j>=0);j--)
        {
            a[j+1]=a[j];
        }*/
        j=i-1;
        while(b<a[j]&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=b;
    }
    printf("The Sorted Array is: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}