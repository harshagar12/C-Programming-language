#include<stdio.h>
int square(int x)
{
    int y=x*x;
    return y;
}
int cube(int x)
{
    int y=x*x*x;
    return y;
}
int main()
{
    int a,b,c;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b=square(a);
    printf("\nThe Square of Number is %d",b);
    c=cube(a);
    printf("\nThe Cube of Number is %d",c);
    return 0;
}