/*To Find Armstrong Number*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d = 0;
    printf("Enter any Number: ");
    scanf("%d", &a);
    b=a;

    while (b != 0) 
    {
       c = b % 10;
       d = d+c*c*c;
       b = b/10;
    }

    if (d == a)
        printf("%d is an Armstrong number.", a);
    else
        printf("%d is not an Armstrong number.", a);

    return 0;
}