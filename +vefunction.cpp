#include<stdio.h>
void check(int);
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    check(a);
    return 0;
}
void check(int x)
{
    if (x>0)
    printf("Positive Number");
    else if(x<0)
    printf("Negative Number");
    else
    printf("Number is Zero");
}