/*To convert Celcius to Farehnite*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int c,f;
    printf("Enter Temprature in Celcius");
    scanf("%d",&c);
    f=(c*9)/5+32;
    printf("The Temprature in Farehnite is= %d",f);
    getch();
    return 0;
}