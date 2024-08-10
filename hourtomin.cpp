/*Hour to Minutes*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int h,m,n,t;
    printf("Enter The Hours of Time: ");
    scanf("%d",&h);
    printf("\nEnter Minutes of Time: ");
    scanf("%d",&m);
    n=h*60;
    t=n+m;
    printf("Total Time in Minutes: %d",t);
}

