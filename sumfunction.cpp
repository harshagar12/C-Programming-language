#include<stdio.h>
int sum(int x,int y)
{
    int z=x+y;
    return z;
}
int main()
{
    int a,b,c;
    printf("Enter 2 Numbers: ");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("The Sum of 2 Numbers is %d",c);
    return 0;
}

