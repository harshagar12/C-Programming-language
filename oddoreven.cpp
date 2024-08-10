/*Odd or Even*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The Number %d is Even \n",a);
    }
    else
    {
        printf("The Number %d is Odd",a);
    }
    return 0;
}