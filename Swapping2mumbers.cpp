/*Swapping of 2 Numbers*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0;
    printf("Enter 2 Numbers a & b to be Swapped");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The two Swapped numbers are a= %d \n",a);
    printf("b= %d",b);
    getch();
    return 0;
}
