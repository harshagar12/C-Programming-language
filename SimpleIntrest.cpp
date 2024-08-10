/*To Calculate Simple Intrest*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int p,r,t,s;
    printf("\nEnter the Principle Ammount");
    scanf("%d",&p);
    printf("\nEnter the Rate of Intrest per Annum=");
    scanf("%d",&r);
    printf("\nEnter the Time Interval=");
    scanf("%d",&t);
    s=(p*r*t)/100;
    printf("\nThe Simple Intrest is=%d",s);
    getch();
}
