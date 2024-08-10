
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
    for(i=0;i<n;i++)
    { 
            if(a[i]==0)
            {
                a[i]=1;
            }
    }
    printf("The new array is;\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}