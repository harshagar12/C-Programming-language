/*WAP to find sum of 2 elements whose sum is equal to user defined target value. If Sum is equal to target value exist ten print its indices value */
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
    printf("Enter the Number whose sum if to be found in the Array: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(x==(a[i]+a[j]))
            {
                b=i;
                c=j;
            }
        }
    }
    printf("The Elements are at %d and %d",b,c);
    return 0;
}