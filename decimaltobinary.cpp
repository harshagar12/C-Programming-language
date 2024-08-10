#include<stdio.h>
int main()
{
    int n,x[100],i,j,b,c;
    printf("Enter an Decimal Number: ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        x[i]=n%2;
        n=n/2;
    }
    for(int j=i-1; j>=0;j--) 
    {
        printf("%d", x[j]); 
    }
    return 0;
}