#include<stdio.h>
void swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("The 2 Swapped Numbers are %d %d",x,y);
}
int main()
{
    int a,b;
    printf("Enter 2 Numbers: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}