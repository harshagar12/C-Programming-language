#include<stdio.h>
#include<conio.h>
int main()
{
    int b,c,n,i;
    printf("Enter the Maximum numbers in Array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value of the %d element: ",i);
        scanf("%d",&a[i]);
    }
    c=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>c)
        {
            c=a[i];
            b=i;
        }
        else if(a[i]==c)
        b=i;
    }
    printf("\nThe greatest number is %d at position %d",c,(b+1));
    return 0;
}