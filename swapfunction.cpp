#include<stdio.h>
void swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
int main()
{
    int a,b,c;
    printf("Enter 2 Numbers: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("The 2 Swapped Numbers are %d %d",a,b);
    return 0;
}