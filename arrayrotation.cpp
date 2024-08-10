#include<stdio.h>
int main()
{
    int n,x,i,j,b,c;
    printf("Enter the Size of The Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements of the Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Number of element to rotate the Array by: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(i<x)
        {
            b=i+(n-x);
            printf("%d ",a[b]);
        }
        else
        {
            b=i+x;
            printf("%d ",a[b]);
        }
    }
    return 0;
}