/*Sum of N Natural Numbers*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,b,i;
    printf("Enter any Number");
    scanf("%d",&n);
    b=0;
    for(i=1;i<=n;i++)
    {
        b=b+i;
    }
    printf("The Sum of The Numbers is= %d",b);
}